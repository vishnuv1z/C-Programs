#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("Enter the first number a: ");
	scanf("%d",&a);
	printf("Enter the second number number b: ");
	scanf("%d",&b);
	printf("Enter the third number c: ");
	scanf("%d",&c);
	m=(a>b&&a>c?a:b>c?b:c);
	if(a==b&&b==c)
	{
		printf("\nAll numbers are equal");
	}
	else if(a==b&&a==m)
	{
		printf("\na=%d and b=%d are equal and is the largest",a,b);
	}
	else if(b==c&&b==m)
	{
		printf("\nb=%d and c=%d are equal and is the largest",b,c);
	}
	else if(a==c&&c==m)
	{
		printf("\na=%d and c=%d are equal and is the largest",a,c);
	}
	else
	{
		printf("\nThe greatest number is %d",m);
	}
	return 0;
}
