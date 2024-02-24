int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a multiple of 3 and has 5 in the units place
    if (num % 3 == 0 && num % 10 == 5) {
        printf("Yes");
    } 
