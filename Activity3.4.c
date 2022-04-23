#include<stdio.h>

void main()
{
    float percentage;
    printf("Enter your percentage of intermediate marks: ");
    scanf("%f",&percentage);
    if (percentage>=80.0)
    {
        printf("You are eligible for BSSE program.\n");
    }
    else if (percentage>=70.0)
    {
        printf("You are eligible for BSCS program.\n");
    }
    else if (percentage>=60.0)
    {
        printf("You are eligible for BSIT program.\n");
    }
    else
    {
        printf("You are not eligible for any program.\n");
    }
}
