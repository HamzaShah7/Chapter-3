#include <stdio.h>

int main()
{
    int num1, num2;

    // Input the two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Check if num1 is a factor of num2
    if (num2 % num1 == 0) {
        printf("%d is a factor of %d.\n", num1, num2);
    } else {
        printf("%d is not a factor of %d.\n", num1, num2);
    }

}
