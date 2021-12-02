#include <stdio.h>

void printlnf(char *string)
{
    printf("%s\n", string);
}

float float_add(float a, float b)
{
    return a + b;
}

float float_multiply(float a, float b)
{
    return a * b;
}

float float_substract(float a, float b)
{
    return a - b;
}
float float_divide(float a, float b)
{
    if (b == 0)
    {
        printf("Math error, Can\'t divide on 0\n");
        return 0;
    }

    return a / b;
}

int int_add(int a, int b)
{
    return a + b;
}

int int_multiply(int a, int b)
{
    return a * b;
}

int int_substract(int a, int b)
{
    return a - b;
}
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