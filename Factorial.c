#include <stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    }else{
        for(i=1;i<=n;i++){
            f*=i;
        }
        printf("The factorial of %d is: %d\n", n,f);
    }
    return 0;
}
