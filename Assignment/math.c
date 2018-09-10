int math(int num1, int num2, char Operator)
{




    printf("Enter one of the following operators to perform its desired respective math function: \n");
    printf("+, -, *, /, %, <, >, &, |, ^, ~ \n");
    scanf("%c", &Operator);



    if(Operator == '+')
    {
        printf("Enter two numbers to be summed\n");
        printf("Number1:");
        scanf("%d", &num1);
         printf("Number2:");
        scanf("%d", &num2);
        printf("%d", num1 + num2);
    }

    if(Operator == '-')
    {
        printf("What numbers do you want to subtract?\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 - num2);
    }


    if(Operator == '*')
    {
        printf("What numbers do you want to multiply?\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 * num2);
    }

    if(Operator == '/')
    {
        printf("What numbers do you want to divide?\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 / num2);
    }

    if(Operator == '%')
    {
        printf("What numbers do you want the modulus of?\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        printf("%d", num1 % num2);
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


