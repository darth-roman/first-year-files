#include <stdio.h>
// a simple and basic version of printf()
//  that adds the \n char at the end of the string
void printlnf(char *string)
{
    printf("%s\n", string);
}

/*
    * function names starts with float handle 
    the arithmetics of float args with a float return type

    * function names starts with int handle 
    the arithmetics of integer args with a int return type
*/

// returns the addition of two floats a and b
float float_add(float a, float b)
{
    return a + b;
}

// returns the multiplication of two floats a and b
float float_multiply(float a, float b)
{
    return a * b;
}

// returns the substraction of two floats a and b
float float_substract(float a, float b)
{
    return a - b;
}

// returns the division of two floats a and b
float float_divide(float a, float b)
{
    if (b == 0)
    {
        printf("Math error, Can\'t divide on 0\n");
        return 0;
    }

    return a / b;
}

// returns the addition of two floats a and b
int int_add(int a, int b)
{
    return a + b;
}

// returns the multiplication of two ints a and b
int int_multiply(int a, int b)
{
    return a * b;
}

// returns the substraction of two int(s) a and b
int int_substract(int a, int b)
{
    return a - b;
}

// returns the division of two int(s) a and b
int int_divide(int a, int b)
{
    if (b == 0)
    {
        printf("Math error, Can\'t divide on 0\n");
        return 0;
    }

    return a / b;
}

void main()
{
    printf("%d\n", idivide(2, 6));
}