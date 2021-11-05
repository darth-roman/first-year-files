#include <stdio.h>
/*
    Arrays:
        - Indexes =>   | 0 | 1 | 2 | 3 | 4 | ... | n |
        - char =>   | H | e | l | l | o | ... | x |
        - Alphabets Ex1 =>   | A | B | C | D | E | ... | Z |
        - Even Numbers =>  | 2 | 4 | 6 | 8 | 10 | ... | n |
    
    Pros:
        - Simple and easy to understand
        - Specific number of items
    
    Cons:
        - TOO simple
        - Performace issues like speed
        - Not good with bulky data ...
*/
void main()
{
    int array[3];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;

    // Indexes starts with 0 and elements from array[0]
    for (int i = 0; i < 3; i++)
    {
        printf("Here is the index %d\n", i);
        printf("Here is the array element %d\n", array[i]);
    }

    // Message here is taken as an array of chars formed into a string type
    char message[] = "Hello there";
    // Printing "message" char-by-char
    for (int i = 0; i < 11; i++)
    {
        printf("%c\n", message[i]);
    }
    // Printing "message" as a full normal array
    printf("%s\n", message);
}