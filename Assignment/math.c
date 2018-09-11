int math(int num1, int num2, char Operator)
{



    // prompts user for operator input to ensure desired calculation is performed
    printf("Enter one of the following operators to perform its desired respective math function: \n");
    printf("+, -, *, /, %, <, >, &, |, ^, ~ \n");
    //allocates address of variable operator; retrieves value when called later on
    scanf("%c", &Operator);


    // condition to verify the user's input from above
    if(Operator == '+')
    {
        printf("Enter two numbers to be summed\n");
        printf("Number1:");
        scanf("%d", &num1);
        // Number1 = 5
        printf("Number2:");
        scanf("%d", &num2);
        // Number2 = 7
        printf("%d", num1 + num2);
        //num1 + num2 = 12
    }

    if(Operator == '-')
    {
        printf("What numbers do you want to subtract?\n");
        scanf("%d", &num1); //num1 = 5
        scanf("%d", &num2); // num2 = 7
        printf("%d", num1 - num2); // num1 - num2 = -2
    }


    if(Operator == '*')
    {
        printf("What numbers do you want to multiply?\n");
        scanf("%d", &num1); // num1 =5
        scanf("%d", &num2); // num2 = 7
        printf("%d", num1 * num2); // num1 * num2 = 35
    }

    if(Operator == '/')
    {
        printf("What numbers do you want to divide?\n");
        scanf("%d", &num1); // 4
        scanf("%d", &num2); //2
        printf("%d", num1 / num2); // 4/2 = 2
    }

    if(Operator == '%')
    {
        printf("What numbers do you want the modulus of?\n");
        scanf("%d", &num1); // 2
        scanf("%d", &num2); // 1
        printf("%d", num1 % num2); // num1 % num2 = 0
    }

    if(Operator == '<')
    {
        printf("What numbers do you want to left shift?\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 << num2);
    }

    if(Operator == '>')
    {
       printf("What numbers do you want to right shift?\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 >> num2);
    }

      if(Operator == '&')
    {
       printf("Logical AND:\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 & num2);
    }

      if(Operator == '|')
    {
       printf("Logical OR: \n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 | num2);
    }

      if(Operator == '^')
    {
       printf("Logical XOR: \n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 ^ num2);
    }

      if(Operator == '~')
    {
       printf("Logical NOT: \n");
        scanf("%d", &num1);
        //scanf("%d", &num2);
        printf("%d", ~num1);
    }





}


