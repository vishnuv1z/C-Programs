#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers to swap: ");
	scanf("%d %d",&a,&b);
	printf("Value before swapping: a=%d, b=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n\nValue after swapping: a=%d, b=%d",a,b);
	return 0;
}
