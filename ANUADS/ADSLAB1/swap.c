#include<stdio.h>
int main()
{
    int ar[50],n,ar2[50],temp,i;
   printf("Enter the array size\n");
   scanf("%d",&n);
	printf("Enter the array elements (First)\n");
  
   for(int i = 0; i < n; i++)
   {
    scanf("%d",&ar[i]);
   }
   printf("Enter the array elements (Second)\n");
  
   for(int i = 0; i < n; i++)
   {
    scanf("%d",&ar2[i]);
   }
    printf("The arrays before swapping\n");

   printf("The first Array\n");

   for ( i = 0; i < n; i++)
   {
      printf("%d\t",ar[i]);
   }
   printf("The Second  Array\n");

   for ( i = 0; i < n; i++)
   {
      printf("%d\t",ar2[i]);
   }
  
   for( i = 0; i < n; i++ ){

      temp = ar[i];

      ar[i] = ar2[i];

      ar2[i] = temp;


   }

   printf("The arrays after swapping\n");

   printf("The first Array\n");
   for ( i = 0; i < n; i++)
   {
      printf("%d\t",ar[i]);
   }
   printf("The Second  Array");
   for ( i = 0; i < n; i++)
   {
      printf("%d\t",ar2[i]);
   }
   
   
}
