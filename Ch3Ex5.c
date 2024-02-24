#include <stdio.h>

int main()
{
   int side1, side2, side3;

    // Input the lengths of the sides
    printf("Enter the length of side 1: ");
    scanf("%d", &side1);

    printf("Enter the length of side 2: ");
    scanf("%d", &side2);

    printf("Enter the length of side 3: ");
    scanf("%d", &side3);

    // Check if it's a right-angled triangle using the Pythagorean theorem
    if ((side1 * side1 + side2 * side2 == side3 * side3) || // 60 30 90
        (side1 * side1 + side3 * side3 == side2 * side2) || // 90 30 60
        (side2 * side2 + side3 * side3 == side1 * side1)) {  // 60 90 30
        printf("It is a right-angled triangle.\n");
    } else {
        printf("It is not a right-angled triangle.\n");
    }

 
}
