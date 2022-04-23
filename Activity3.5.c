#include<stdio.h>

void main()
{
    float Number1,Number2;
    int choice;
    float result;
    printf("Enter Number 1: ");
    scanf("%f",&Number1);
    printf("Enter Number 2: ");
    scanf("%f",&Number2);
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n Enter your choice from 1-4: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=Number1+Number2;
        printf("Result of %f + %f is: %f\n", Number1, Number2, result);
    }
    else if (choice==2)
    {
        result=Number1-Number2;
        printf("Result of %f - %f is: %f\n", Number1, Number2, result);
    }
    else if (choice==3)
    {
        result=Number1*Number2;
        printf("Result of %f * %f is: %f\n", Number1, Number2, result);
    }
    else if (choice==4)
    {
        result=Number1/Number2;
        printf("Result of %f / %f is: %f\n", Number1, Number2, result);
    }
    else
    {
        printf("You enter a wrong choice.\n");
    }
}
