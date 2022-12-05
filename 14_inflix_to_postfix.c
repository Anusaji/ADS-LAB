#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int TOP = -1;

void push(char c)
{
    if (TOP < MAX)
        stack[++TOP] = c;
    else
        printf("STACK OVERFLOW\n");
}

char pop()
{
    if (TOP > -1)
        return stack[TOP--];
    else
        printf("STACK UNDERFLOW\n");
}

int precedence(char operator)
{
    switch (operator)
    {
    case '^':
        return 3;
        break;
    case '*':
        return 2;
        break;
    case '/':
        return 2;
        break;
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    default:
        return -1;
        break;
    }
}

int is_operand(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int stack_is_empty()
{
    return TOP == -1;
}

int peek()
{
    return stack[TOP];
}

void convert_to_postfix(char *expression)
{
    char c;
    for (int i = 0; expression[i] != '\0'; i++)
    {
        c = expression[i];
        if (is_operand(c))
        {
            printf("%c", c);
        }
        else if (c == ')')
        {
            c = pop();
            while (c != '(' && !stack_is_empty())
            {
                printf("%c", c);
                c = pop();
            }
        }
        else if (precedence(c) > precedence(peek()) || stack_is_empty() || expression[i] == '(')
        {
            push(c);
        }
        else if (precedence(c) == precedence(peek()) && peek() == '^')
        {
            push(c);
        }

        else
        {
            while (precedence(peek()) >= precedence(c))
            {
                printf("%c", pop());
            }
            push(c);
        }
    }
    while (!stack_is_empty())
    {
        printf("%c", pop());
    }
}

int main()
{
    char expression[100];
    printf("Enter the expression: ");
    scanf("%s", expression);
    convert_to_postfix(expression);
    return 0;
}
