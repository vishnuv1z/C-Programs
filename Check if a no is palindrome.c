#include<stdio.h>
int main()
{
	int num,rev=0,numcopy;
	printf("Enter a number to check whether it is palindrome: ");
	scanf("%d",&num);
	numcopy=num;
	while(num!=0)
	{
		rev=rev*10+num%10;
		num/=10;
	}
	printf("Reversed number=%d\n",rev);
	if(numcopy==rev)
	{
		printf("\nThe number is palindrome.");
	}
	else
	{
		printf("\nThe number is not palindrome.");
	}
	return 0;
}
