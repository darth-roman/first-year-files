#include<stdio.h>
#include<math.h>

int main(){
    // double x = cos(90.0);
    // // char message[] = "Hello" // ['H','e'...]
    // // char message2 = 'H';
    // printf("%lf\n",x);
    // Loops in C = boucles
    // For loop = pour
    /*
        for(int index = 0; index<=30 ; index=index+1 => index+=1){
        }

        HERE
    */
    printf("From For Loop\n");
    for(int index=0; index<=10;index+=1){
        printf("%d\n", index);
    }

    // While loop = tantque
    /*
        for(int index = 0; index<=5;index=index+2 => index+=2){
        }
    */

    printf("From While Loop\n");
    int index = 0;
    while(index<10){
        printf("%d\n", index);
        index+=1;
    }

    printf("From Do..While Loop\n");
    int isRight = 0;
    do{
        printf("Hello World\n");
    }while(isRight==1);

    return 21;
}