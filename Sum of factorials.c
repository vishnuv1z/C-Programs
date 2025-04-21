#include <stdio.h>
int main()
{
    int i,n,sum=0,f=1;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    for (i=1;i<=n;i++) {
        f*=i;
        sum+=f;
    }

    printf("The sum of the series 1!+2!+...+%d! is: %d\n",n,sum);
    return 0;
}
