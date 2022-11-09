#include<stdio.h>
void main()
{
	int a[100],b[100],c[100],n,i,k=0;
	printf("Enter the size of the arrays: ");
	scanf("%d",&n);
	printf("Enter the elements of the first array: ");
		for(i=0;i<n;i++)
		{
 		scanf("%d",&a[i]);
		}
	printf("Enter the elements of the second array: ");
		for(i=0;i<n;i++)
		{
		scanf("%d",&b[i]);
		}

	for(i=0;i<n;i++)
         {
		c[k++]=a[i];
		c[k++]=b[i];
		
	}
	printf("The merged array is:");
	for(i=0;i<2*n;i++)
	{
	printf("%d\n",c[i]);
	}
}

