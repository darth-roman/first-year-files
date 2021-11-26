#include <stdio.h>

void main()
{

    // 5 Years f informatique + 1 BAC, + foug 5 snin
    // Switch = Selon ()
    // Range in C => 1 ... n
    int year = 32;
    switch (year)
    {
    case 0 ... 10:
        printf("You're still BAC \n");
        break;

    case 11:
        printf("First Year \n");
        break;

    case 12:
        printf("Second Year \n");
        break;

    case 13:
        printf("Third Year \n");
        break;

    case 14:
        printf("Fourth Year \n");
        break;

    case 15:
        printf("Fifth Year \n");
        break;

    default:
        printf("Blastek mahich hna \n");
        break;
    }
}