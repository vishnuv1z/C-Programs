#include <stdio.h>
int main()
{
    int i,n,num,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    i=1;
    while (i<=n)
	{
        printf("Enter number %d: ",i);
        scanf("%d",&num);
        sum+=num;
        i++;
    }
    printf("The sum of the %d numbers is: %d\n", n, sum);
    return 0;
}
