#include<stdio.h>

void main(){
    // "Even" = Pair, "Odd" = impair
    // n % 2 = 0 
    // Ba9i al 9issma = 0 ==> nombre impair
    // The user will give us the integer (n)
    int n, rest;
    printf("Enter your number\n");
    scanf("%d", &n);
    rest = n % 2; // n mod 2
    if(rest == 0){ // Boolean = True or False, 1 or 0
        printf("%d is Even\n", n);
    }else{
        printf("%d is Odd\n", n);
    }
}