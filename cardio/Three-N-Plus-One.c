/*
    The 3N+1 Problem
        - Iterative procedure/Algo/Funtion on POSITIVE integers => N > 0

            Iterative = Boucle - Loops
            Procedure = Algorithm
            Positive = N MUST BE Greater than 0
                if...else

        
        - the integer N yet7awel to N/2 or 3N+1 on whether N is Even or Odd
            Ex: N = 4 
                is N even? Yes => 4/2 = 2, is 2 even? yes, 2/2 = 1, is 1 even? No, 3(1)+1 = 4 ... 
            Ex: N = 5
                is N even? No => 3(5)+1 = 16, is 16 even? yes, 16/2 = 8, is 1 even? No, 3(1)+1 = 4 ...
            
        - 1 -> 4 -> 2 -> 1

    Why?
        - Train on the loops and conditionals
*/


/*
    The Solution: 
        - We need User's input = scanf("%d");
            - Integers + postive 
                if(n > 0){
                    Solve the problem
                }else{
                    Error
                }
        - Loop : for loop
            - We stop at 1!



*/
#include <stdio.h>

void main()
{
    int N;
    printf("Please enter an integer N\n $>");
    scanf("%d", &N);
    //newValue = N;
    // for (int i = 1; newValue != 1; i++)
    // {
    //     if(N>0){
    //         if ((newValue % 2) == 0)
    //         {
    //             newValue /= 2;
    //         }
    //         else
    //         {
    //             newValue = 3 * newValue + 1;
    //         }
    //     }else{
    //         printf("Error, please enter a POSITIVE number\n");
    //         printf("exiting ...\n");
    //         break;
    //     }
    //     printf("> %d \n", newValue);
    // }

    while (N != 1) // !NO = Yes
    {
        if(N>0){
            if((N%2)==0){
                N = N /2;
            }else{
                N = 3*N + 1;
            }

            printf("> %d \n", N);

        }else{
            printf("Error, N must be Positive\n exiting ...\n");
            break;
        }
    }
    
}