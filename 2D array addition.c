#include<stdio.h>
int main()
{
	int i,j,a[20][20],b[20][20],r1,c1,r2,c2;
	printf("Enter the no of rows and columns for 1st array: ");
	scanf("%d %d",&r1,&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter the element for position a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n\n");
	}
	printf("Enter the no of rows and columns for 2nd array: ");
	scanf("%d %d",&r2,&c2);
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter the element for position b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n\n");
	}
	printf("Sum of 2 arrays is: \n\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
