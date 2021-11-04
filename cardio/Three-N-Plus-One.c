/*
    The 3N+1 Problem
        - Iterative procedure on POSITIVE integers
        - the integer N maps to N/2 or 3N+1 on whether N is Even or Odd
        - 1 -> 4 -> 2 -> 1

    Why?
        - Train on the loops and conditionals
*/

#include <stdio.h>

void main()
{
    int N, newValue;
    printf("Please enter an integer N\n $>");
    scanf("%d", &N);
    newValue = N;
    for (int i = 1; newValue != 1; i++)
    {

        if ((newValue % 2) == 0)
        {
            newValue /= 2;
        }
        else
        {
            newValue = 3 * newValue + 1;
        }
        printf("> %d \n", newValue);
    }
}