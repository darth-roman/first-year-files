// Standard Input Output
#include <stdio.h>

// Main function
int main()
{
    /*
    // C : God's programming language
    printf("Hello There!\n");

    int i = 45;       // 32bits
    float f = 223.00; // 64bit
    // true / false
    double d = 1234.7983; //128bits
    char c = 'a';
    char string[] = "Sa7itou";

    printf("Int %d \n Float %f \n Char %c \n String %s \n Double %lf", i, f, c, string, d);
    */
    int age;

    printf("Please enter your age\t>");
    scanf("%d", &age);
    /*
    if (age > 18)
    {
        // Code if yes
        printf("You are an adult \n");
    }
    else
    {
        if (age < 0)
        {
            printf("Nhar tould arwa7 \n");
            return 0;
        }
        // Code if No
        printf("You are a minor \n");
    }
    */
    switch (age)
    {
    case 0 ... 18:
        printf("You are a minor");
        break;
    case 19 ... 30:
        printf("You are a young adult");
        break;
    case 31 ... 50:
        printf("You are an old man");
        break;
    default:
        printf("Ro7 7edja");
        break;
    }
}