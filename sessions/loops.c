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
        for(int index = 0; index<=30 ; index=index+1 => index+=1 => index++){
        }

        HERE
    */

    // Pour
    // pour i de 0 jusqua 10 pas 2{
    //
    //}
    printf("From For Loop\n");
    for (int index = 1; index <= 600; index += 10)
    {
        printf("You have repeated this for %d times\n", index);
    }

    int array[10];
    // array[i]=value
    for (int i = 10; i > 0; i--)
    {
        array[i] = i * 2;
        printf("Array[%d] = %d \n", i, array[i]);
    }

    // While loop = tantque
    /*
        for(int index = 0; index<=5;index=index+2 => index+=2){
        }
    */

    // Tantque
    printf("From While Loop\n");
    int index = 0;
    while (index <= 10)
    {
        printf("You have repeated this for %d times\n", index);
        index += 3;
    }

    printf("From Do..While Loop\n");
    int isRight = 0;
    int counter = 0;
    // rpt ... jusqu'a, faire...tantque
    do{
        printf("Hello World %d\n", counter++);
    } while (isRight == 1);

    return 21;
}