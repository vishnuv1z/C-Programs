#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	{
		m=a;
	}
	else if(b>a&&b>c)
	{
	    m=b;
    }
    if(c>a&&c>b)
    {
    	m=c;
	}
	printf("maximum is %d",m);
	return 0;
}
