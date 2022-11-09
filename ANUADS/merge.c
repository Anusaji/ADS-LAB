#include<stdio.h>
void main()
{
	int a[100],b[100],c[100],n,m,i;
	printf("Enter the size of the first array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
		for(i=0;i<n;i++)
		{
 		scanf("%d",&a[i]);
		}
	printf("Enter the size of second array\n");
	scanf("%d",&m);	
		for(i=0;i<m;i++)
		{
		scanf("%d",&b[i]);
		}

	for(i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for(i=0;i<m;i++)
	{
 	c[i+n]=b[i];
	}

	printf("The final array is\n");
	for(i=0;i<n+m;i++)
{
	printf("%d\n",c[i]);
}
}



