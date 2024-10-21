#include<stdio.h>
int main()
{
	int a,b,c,n,p,q,r,t;
	printf("Enter the no. of participants: ");
	scanf("%d",&n);
	t=1;
	p=0;
	q=0;
	r=0;
	b=1;
	while(b<=n)
	{
		printf("\nParticipant no.%d",b);
		printf("\nEnter your age:");
		scanf("%d",&a);
		if(a>=18)
		{
			printf("\nYou are eligible to vote.\n");
			printf("1. Arun\n2. Ajay\n3. Vivek");
			printf("\n\nEnter the number of the candidate that you want to vote:");
			scanf("%d",&c);
			if(c==1)
			{
				printf("\nYou voted for Arun.\n");
				p++;
			}
			else if(c==2)
			{
				printf("\nYou voted for Ajay.\n");
				q++;
			}
			else if(c==3)
			{
				printf("\nYou voted for Vivek.\n");
				r++;
			}
			else
			{
				printf("\nInvalid Input.");
			}
		}
		else if(a<18)
		{
			printf("\nYou are not eligible to vote.");
		}
		b++;
	}
	printf("\n\nThe voting is over. Press 1 to print results.");
	scanf("%d",&t);
	if(t==1)
	{
		printf("\n\nThe results are:\n\n");
		printf("Arun - %d votes",p);
		printf("\nAjay - %d votes",q);
		printf("\nVivek - %d votes",r);
		if(p>q&&p>r)
		{
			printf("\n\nThe winner is - Arun");
		}
		else if(q>p&&q>r)
		{
			printf("\n\nThe winner is - Ajay");
		}
		else if(r>p&&r>q)
		{
			printf("\n\nThe winner is - Vivek");
		}
		else if(p==q&&p==r)
		{
			printf("\n\nIt is a tie");
		}
   }
   else
   {
   	printf("\nWrong number");
   }
	return 0;
}
