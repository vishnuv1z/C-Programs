#include<stdio.h>
int main()
{
	int k;
	float m;
	printf("Enter the distance in km: ");
	scanf("%d",&k);
	m=k/1.609;
	printf("Distance in miles is - %f",m);
	return 0;
}
