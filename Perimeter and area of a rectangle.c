#include<stdio.h>
int main()
{
	int l,b,p,a;
	printf("Enterthe length and breadth of a rectangle: ");
	scanf("%d %d",&l,&b);
	p=2*(l*b);
	a=l*b;
	printf("Perimeter of the rectangle = %d\n\nArea of the rectangle = %d",p,a);
	return 0;
}
