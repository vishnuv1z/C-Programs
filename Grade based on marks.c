#include<stdio.h>
int main()
{
	int m;
	printf("Enter your marks out of 100: ");
	scanf("%d",&m);
	if(m<=100&&m>=90)
	{
		printf("A1");
	}
	else if(m<=90&&m>=80)
	{
		printf("A2");
	}
	else if(m<=80&&m>=70)
	{
		printf("B1");
	}
	else if(m<=70&&m>=60)
	{
		printf("B2");
	}
	else if(m<=60&&m>=50)
	{
		printf("C1");
	}
	else if(m<=50&&m>=40)
	{
		printf("C2");
	}
	else if(m<=40&&m>=30)
	{
		printf("D1");
	}
	else if(m<=30&&m>=20)
	{
		printf("D2");
	}
	else if(m<=20)
	{
		printf("Fail");
	}
	return 0;
}
