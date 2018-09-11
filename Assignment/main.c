#include <stdio.h>
#include <stdlib.h>
#include "math.h"
int main()
{
    int num1;
    int num2;
    char Operator;
    //implementation (function call) of math function which is defined in main.c file; values inserted by user are passed
    math(num1, num2, Operator);
    
    /* if scanf was not used; an example of of each operation for each function call would be:
    math(5, 7, '+');
    math(5, 7, '-');
    math(5, 7, '*');
    math(2, 1, '/');
    math(2, 1, '%');
    math(2, 1,  '<');
    math(2, 1, '>');
    math(0, 1, '&');
    math(0, 1, '|');
    math(0, 1, '^');
    math(0, 1, '~');
    
    
    */
    return 0;
}
