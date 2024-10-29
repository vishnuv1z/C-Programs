#include<stdio.h>
int main()
{
	int a,i,n;
	i=1;
	n=10;
	printf("Enter the no which you want to print the multiplication table: ");
	scanf("%d",&a);
	while(i<=n)
	{
		printf("%d*%d=%d\n",a,i,a*i);
		i++;
	}
	return 0;
}
