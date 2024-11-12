#include<stdio.h>
int main()
{
	int i,j,a[20][20],b[20][20],m,n,p,q,r=2,s=2;
	printf("Enter the no of rows and columns for 1st array: ");
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element for position a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("Enter the no of rows and columns for 2nd array: ");
	scanf("%d %d",&p,&q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("Enter the element for position b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n\n");
	}
	printf("Sum of 2 arrays is: \n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
