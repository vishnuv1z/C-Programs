#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	if((a^b)==0)
	{
		printf("\nEqual");
	}
	else
	{
		printf("\nUnequal");
	}
	return 0;
}
