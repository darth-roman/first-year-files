/*
    This program will do the following:
        * Version 1:
            - Checks if the given number is even or odd.
            - Saves each number in the right array.
            - if the user entered 0 it will ONLY counts how many 0 are entered, if 0 is entered 3 times
                the program will exit.
            - Ex: $> 2 -> even array; $> 3 -> odd array.
        * Version 2:
*/

#include <stdio.h>

void main()
{
    int n, evenArray[10], oddArray[10];
    int evenCount = 0, oddCount = 0;
    float oddPercentage = 0.0, evenPercentage = 0.0;
    // this loop will iterate 10 times (the size of the array)
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the `Number`\n $>");
        scanf("%d", &n);
        if ((n % 2) == 0)
        {
            evenArray[i] = n;
            evenCount++;
        }
        else
        {
            oddArray[i] = n;
            oddCount++;
        }
    }
    printf("Odd Numbers Count %d\nEven Numbers Count %d\n", oddCount, evenCount);
}