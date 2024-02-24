#include <stdio.h>

int main()
{
   // Declare variables
    float matricObtained, matricTotal = 1000;
    float interObtained, interTotal = 1000;
    float entryTestObtained, entryTestTotal = 100;

    // Input marks for matric
    printf("Enter obtained marks in Matric: ");
    scanf("%f", &matricObtained);

    // Input marks for inter
    printf("Enter obtained marks in Intermediate: ");
    scanf("%f", &interObtained);
    
    // Input marks for entry test
    printf("Enter obtained marks in Entry Test: ");
    scanf("%f", &entryTestObtained);
 
    float matricPercentage = matricObtained / matricTotal * 100;
    float interPercentage = interObtained / interTotal * 100;
    float entryTestPercentage = entryTestObtained / entryTestTotal * 100;
    
    // Check eligibility
    if (matricPercentage >= 60 &&
        interPercentage >= 65 &&
        entryTestPercentage >= 65) {
        printf("Congratulations! You are eligible for admission.\n");
    } else {
        printf("Sorry, you are not eligible for admission.\n");
    }
}
