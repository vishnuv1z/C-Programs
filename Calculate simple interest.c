#include<stdio.h>
int main()
{
	int i,p,r,t;
	printf("Enter the principal: ");
	scanf("%d",&p);
	printf("Enter the rate: ");
	scanf("%d",&r);
	printf("Enter the time: ");
	scanf("%d",&t);
	i=(p*r*t)/100;
	printf("\nInterest = %d",i);
	return 0;
}
