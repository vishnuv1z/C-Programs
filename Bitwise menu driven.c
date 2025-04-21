#include <stdio.h>
int main() {
    int choice,a,b,result;
    while(1){
        printf("Bitwise Operations Menu:\n");
        printf("1. AND (&)\n");
        printf("2. OR (|)\n");
        printf("3. XOR (^)\n");
        printf("4. Left Shift (<<)\n");
        printf("5. Right Shift (>>)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 6) {
            printf("Exiting the program.\n");
            break;
        }
        if (choice == 4 || choice == 5) {
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("Enter number of shifts: ");
            scanf("%d", &b);
        } else {
            printf("Enter two numbers (a and b): ");
            scanf("%d %d", &a, &b);
        }
        switch (choice) {
            case 1:
                result = a & b;
                printf("Result of %d & %d = %d\n\n", a, b, result);
                break;
            case 2:
                result = a | b;
                printf("Result of %d | %d = %d\n\n", a, b, result);
                break;
            case 3:
                result = a ^ b;
                printf("Result of %d ^ %d = %d\n\n", a, b, result);
                break;
            case 4:
                result = a << b;
                printf("Result of %d << %d = %d\n\n", a, b, result);
                break;
            case 5:
                result = a >> b;
                printf("Result of %d >> %d = %d\n\n", a, b, result);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
