#include <stdio.h>

void main()
{
    // Arrays = les tableaux
    int rooms[11];
    rooms[0] = 1;
    rooms[1] = 2;
    rooms[2] = 3;
    rooms[3] = 4;
    rooms[4] = 5;
    rooms[5] = 6;
    rooms[6] = 7; // <=
    rooms[7] = 8;
    rooms[8] = 9;
    rooms[9] = 10;
    rooms[10] = 11;
    rooms[11] = 12;

    // CRUD = Create Read Update Delete

    for (int index = 0; index <= 11; index++)
    {
        if (rooms[index] == 10)
        {
            printf("%d your lucky number", rooms[index]);
            break;
        }

        //rooms[index] = index * 10;
        printf("The INDEX : %d has the VALUE %d \n", index, rooms[index]);
    }
}