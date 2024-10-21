#include<stdio.h>
int main()
{
	int h,n,m,t;
	printf("Enter the no of hours and minutes: ");
	scanf("%d %d",&h,&m);
	n=h*60;
	t=n+m;
	printf("Total no of minutes is - %d",t);
	return 0;
}
