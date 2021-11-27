#include<stdio.h>

// This program will play the Guessing Game, we need to enter each time a number
// And if the player guessed it right we print "GG", if not (else), print "NOOB" 
int main(){
    int correctNumber, ourNumber;
    correctNumber = 32;
    scanf("%d", &ourNumber);
    while (ourNumber != correctNumber)
    {
        printf("What is your guess? >> ");
        scanf("%d", &ourNumber);
    }
    // do{
    //     printf("What is your guess? >> ");
    //     scanf("%d", &ourNumber);
    //     printf("NOOB\n");
    // }while(ourNumber!=correctNumber);
    if(ourNumber==correctNumber){
        printf("GG\n");
    }
    return 21;
}