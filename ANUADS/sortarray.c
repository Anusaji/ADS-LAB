#include<stdio.h>

void main(){

    int n,i,ar[50],temp,j;

    printf("Enter the array size\n");

    scanf("%d",&n);

    printf("Enter the array elements (First)\n");
  
    for(int i = 0; i < n; i++)
    {
     scanf("%d",&ar[i]);
    }

    for ( i = 0; i < n ; i++)
    {
        for( j = i+1; j < n; j++)
        {
        
        if(ar[i] < ar[j]){

            temp = ar[i];

            ar[i] = ar[j];

            ar[j] = temp;

        }
        }

    }

    for ( i = 0; i < n; i++)
   {
      printf("%d\t",ar[i]);
   }

    }
    
