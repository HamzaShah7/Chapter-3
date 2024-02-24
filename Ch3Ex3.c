#include <stdio.h>

int main()
{
   float totalBill, discountedPrice = 0;

    // Input the total bill
    printf("Enter the total bill amount: ");
    scanf("%f", &totalBill);

    // Calculate discount based on the discount tiers
    if (totalBill >= 10000) {
        discountedPrice = totalBill * 50/100; 
    } else if (totalBill >= 5000) {
        discountedPrice = totalBill * 35/100;
    } else if (totalBill >= 2500) {
        discountedPrice = totalBill * 20/100;
    } else if (totalBill >= 1000) {
        discountedPrice =totalBill * 10/100;
    }

    // Calculate discounted price
    totalBill = totalBill - discountedPrice;

    // Display discount and discounted price
    printf("Discount: %.2f\n", discountedPrice);
    printf("Discounted Price: %.2f\n", totalBill);

}
