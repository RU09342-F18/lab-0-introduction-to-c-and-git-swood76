int math(int num1, int num2, char Operator)
{



    // prompts user for operator input to ensure desired calculation is performed
    printf("Enter one of the following operators to perform its desired respective math function: \n");
    printf("+, -, *, /, %, <, >, &, |, ^, ~ \n");
    //allocates address of variable operator; retrieves value when called later on
    scanf("%c", &Operator);


    // condition statement(s) which will run or jump based off user's input from above; ex) user inputs '+' first statement is run, rest ignored
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
        scanf("%d", &num1); // num1 = 5
        scanf("%d", &num2); // num2 = 7
        printf("%d", num1 * num2); // results in num1 * num2 = 35
    }

    if(Operator == '/')
    {
        printf("What numbers do you want to divide?\n");
        scanf("%d", &num1); // 4
        scanf("%d", &num2); //2
        printf("%d", num1 / num2); // results in num1/num2 4/2 = 2
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
        scanf("%d", &num1); //2, number to be left shift, 010
        scanf("%d", &num2); //1, the number of bits shift, 001
        printf("%d", num1 << num2); // results in 4, 010 left shift = 100
    }

    if(Operator == '>')
    {
       printf("What numbers do you want to right shift?\n");
        scanf("%d", &num1); // 2, number to be right shift, 010
        scanf("%d", &num2); // 1, number of bits shift, 001
        printf("%d", num1 >> num2); // results in 1, 010 right shift = 001
    }

      if(Operator == '&')
    {
       printf("Logical AND:\n");
        scanf("%d", &num1); // 0
        scanf("%d", &num2); // 1
        printf("%d", num1 & num2); // 0 & 1 = 1
    }

      if(Operator == '|')
    {
       printf("Logical OR: \n");
        scanf("%d", &num1); // 0
        scanf("%d", &num2); // 1
        printf("%d", num1 | num2); // 1
    }

      if(Operator == '^')
    {
       printf("Logical XOR: \n");
        scanf("%d", &num1); // 0 
        scanf("%d", &num2); // 1
        // 0 ^ 1 = 1
        printf("%d", num1 ^ num2); // results in 1
    }

      if(Operator == '~')
    {
       printf("Logical NOT: \n");
        scanf("%d", &num1); // 0
        //scanf("%d", &num2); 
        printf("%d", ~num1); // results in 1
    }

}


