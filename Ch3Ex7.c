#include <stdio.h>

int main()
{
   float salary;
    int experience, bonusTasks;
    float bonus = 0;

    // Input employee details
    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter experience (in years): ");
    scanf("%d", &experience);

    printf("Enter number of bonus tasks: ");
    scanf("%d", &bonusTasks);

    // Calculate bonus based on the given criteria
    if (salary == 10000 && experience == 2 && bonusTasks == 5) {
        bonus = 1500;
    } else if (salary == 10000 && experience == 3 && bonusTasks == 10) {
        bonus = 2500;
    } else if (salary == 25000 && experience == 3 && bonusTasks == 4) {
        bonus = 2000;
    } else if (salary == 75000 && experience == 4 && bonusTasks == 7) {
        bonus = 3500;
    } else if (salary == 100000 && experience == 5 && bonusTasks == 10) {
        bonus = 5000;
    }

    // Display the calculated bonus
    if (bonus > 0) {
        printf("Bonus: %.2f\n", bonus);
    }
    else {
        printf("No bonus applicable for the given criteria.\n");
    }
}
