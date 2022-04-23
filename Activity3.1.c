#include<stdio.h>

void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=13 && age<=19)
    {
        printf("Teenager\n");
    }
}
