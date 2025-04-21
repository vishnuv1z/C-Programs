#include<stdio.h>
int main()
{
	int i,j,k,a[20][20],b[20][20],c[20][20],r1,c1,r2,c2,sum;
	printf("Enter the no of rows and columns for 1st matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the no of rows and columns for 2nd matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("Matrix multiplication is possible\n\n");
		printf("First matrix\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("Enter a[%d][%d]: ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		printf("\nSecond matrix\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("Enter b[%d][%d]: ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
			for(i=0;i<r1;i++){
				for(j=0;j<c2;j++){
					sum=0;
					for(k=0;k<r2;k++){
						sum=sum+a[i][k]*b[k][j];
						c[i][j]=sum;
					}
				}
			}
			printf("\nProduct matrix:\n\n");
			for(i=0;i<r1;i++){
				for(j=0;j<c2;j++){
					printf("%d\t",c[i][j]);
				}
			printf("\n");
		}
	}
	else
	{
		printf("\nMatrix multiplication is not possible");
	}
	return 0;
}
