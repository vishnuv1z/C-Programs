#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	max=(a+b+abs(a-b))/2;
	printf("\nThe maximum is - %d",max);
	return 0;
}
