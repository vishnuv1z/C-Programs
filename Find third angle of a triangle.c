#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the two angles of the triangle: ");
	scanf("%d %d",&a,&b);
	c=180-(a+b);    //angle sum property
	printf("Third angle is - %d",c);
	return 0;
}
