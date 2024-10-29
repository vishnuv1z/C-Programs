#include<stdio.h>
int main()
{
	int n1,n2,add,sub,mul,div,op;
	printf("Enter two operands: ");
	scanf("%d %d",&n1,&n2);
	add=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	printf("\nSelect the operation that you want to perform:\n\n1. Addition\n2. Subtraction\n3. Multipication\n4. Division ");
	scanf("%d",&op);
	if(op==1)
	{
		printf("\n%d + %d = %d",n1,n2,add);
	}
	else if(op==2)
	{
		printf("\n%d - %d = %d",n1,n2,sub);
	}
	else if(op==3)
	{
		printf("\n%d * %d = %d",n1,n2,mul);
	}
	else if(op==4)
	{
		printf("\n%d / %d = %d",n1,n2,div);
	}
	else
	{
		printf("\nInvalid input.");
	}
	return 0;
}
