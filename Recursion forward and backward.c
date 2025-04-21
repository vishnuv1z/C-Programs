#include<stdio.h>

void forward(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\t",i);
	}
}
void backward(int n)
{
	int i;
	for(i=n;i>=1;i--)
	{
		printf("%d\t",i);
	}
}
int main()
{
	int p;
	printf("Enter a number: ");
	scanf("%d",&p);
	forward(p);
	backward(p);
	return 0;
}
