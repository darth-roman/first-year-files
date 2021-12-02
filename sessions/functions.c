#include <stdio.h>
//#include <math.h>

// /*
//     f(x) => function(arguments..)

//     ///// Syntax /////
//     return_type function_name(args...){
//         // Code of the function
//     }

//     double cos(double x){
//         // Code here
//     }

//     Snake Case : mohamed_azzi_faresint n, rest;
//     printf("Enter your number\n");
//     scanf("%d", &n);
//     rest = n % 2; // n mod 2
//     if (rest == 0)
//     { // Boolean = True or False, 1 or 0
//         printf("%d is Even\n", n);
//     }
//     else
//     {
//         printf("%d is Odd\n", n);
//     }ouri
//     Pascal Case : NawalAchouri
//     nawalachouri
// */
int isEven(int variable)
{
    int rest;
    rest = variable % 2; // n mod 2
    printf("%d\n", rest);
    if (rest == 0)
    { // Boolean = True or False, 1 or 0
        printf("%d is Even\n", variable);
        return 1;
    }
    else
    {
        printf("%d is Odd\n", variable);
        return 0;
    }
}

float add(float a, float b)
{
    float result;
    result = a + b;
    printf("result is %f", result);
    return result;
}

void main()
{
    float a, b;
    printf("Enter your first number\n");
    a = scanf("%f", &a);
    printf("Enter your second number\n");
    b = scanf("%f", &b);
    // int decision = isEven(n);
    // printf("The decision is : %d", decision);
    float result = add(a, b);
    printf("your result is %f", result);
}