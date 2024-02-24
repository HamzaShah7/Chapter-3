#include <stdio.h>

int main()
{
   float originalPrice, salesPrice, profitLoss, profitLossPercentage;

    // Input the original price and sales price
    printf("Enter the original price: ");
    scanf("%f", &originalPrice);

    printf("Enter the sales price: ");
    scanf("%f", &salesPrice);

    // Calculate profit or loss
    profitLoss = salesPrice - originalPrice;

    // Determine and display whether it's profit or loss
    if (profitLoss > 0) {
        printf("Profit!\n");
    } else if (profitLoss <= 0) {
        printf("Loss!\n");
    }

    // Calculate and display profit/loss percentage
    profitLossPercentage = (profitLoss / originalPrice) * 100;
    printf("Profit/Loss Percentage: %.2f", profitLossPercentage);

}
