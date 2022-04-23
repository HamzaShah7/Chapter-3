#include<stdio.h>

void main()
{
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);
    if (year%4==0)
    {
        printf("Leap Year\n");
    }
}
