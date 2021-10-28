#include<stdio.h>

// This program will print "Hello Nawal" n times with n is entered by the user (us)
// howMany = n
int main(){
    int howMany, howManyLeft;
    printf("How Many Times Do Yo Want to Repeat the sentence > ");
    scanf("%d", &howMany);
    for(int i=1; i<=howMany; i++){
        howManyLeft=howMany-i;
        printf("Hello Nawal %d\t", i);
        printf("This is how many times you left %d\n", howManyLeft);
    }

    return 21;
}