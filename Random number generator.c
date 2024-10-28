#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int a,i;
	i=1;
	while(i==1)
	{
		printf("Enter a number: ");
		scanf("%d",&a);
		srand(time(NULL));
		int random=(rand()%10)+1;
		printf("%d",random);
		if(a==random)
		{
			printf("\n\n===========YOU WIN!!!===========\n");
		}
		else
		{
			printf("\n\n===========YOU LOSE...===========\n");
		}
		printf("\n\nIf you want to continue playing then press 1.\nIf you want to stop then press 2.\n");
		scanf("%d",&i);
	}
	return 0;
}
