#include<stdio.h>

void main()
{
    int choice;
    float area;
    printf("Find Area: \n");
    printf(" 1. Triangle\n 2. Parallelogram\n 3. Rhombus\n 4. Trapezium\n Enter your choice from 1-4: ");
    scanf("%d",&choice);
    if (choice==1)
    {
        float height, base;
        printf("Enter Height: ");
        scanf("%f",&height);
        printf("Enter Base: ");
        scanf("%f",&base);
        area = 0.5 *(height*base);
        printf("Area of triangle is: %f\n",area);
    }
    else if (choice==2)
    {
        float height, base;
        printf("Enter Height: ");
        scanf("%f",&height);
        printf("Enter Base: ");
        scanf("%f",&base);
        area = height*base;
        printf("Area of parallelogram is: %f\n",area);
    }
    else if (choice==3)
    {
        float diagonal1, diagonal2;
        printf("Enter Diagonal 1: ");
        scanf("%f",&diagonal1);
        printf("Enter Diagonal 2: ");
        scanf("%f",&diagonal2);
        area = 0.5 *(diagonal1*diagonal2);
        printf("Area of rhombus is: %f\n",area);
    }
    else if (choice==4)
    {
        float base1, base2, height;
        printf("Enter Base 1: ");
        scanf("%f",&base1);
        printf("Enter Base 2: ");
        scanf("%f",&base2);
        printf("Enter Height : ");
        scanf("%f",&height);
        area = (((base1+base2)/2)*height);
        printf("Area of rhombus is: %f\n",area);
    }
    else
    {
        printf("You enter a wrong choice.\n");
    }
}
