#include<stdio.h>

void main()
{
    float temperature;
    printf("Enter your body temperature: ");
    scanf("%f",&temperature);
    if (temperature>98.6)
    {
        printf("You have fever\n");
    }
    else
    {
        printf("You don't have fever\n");
    }
}
