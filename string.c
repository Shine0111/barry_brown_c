#include <stdio.h>
#define SIZE 10

int main()
{
    char greet[SIZE] = "hello";

    char name[SIZE];
    printf("Enter your name: ");

    fgets(name, SIZE, stdin);

    // Replace \n with \0
    int i = 0;
    while (name[i] != '\n' && name[i] != '\0')
        i++;

    name[i] = '\0'; // Issue is if the name[] don't have a \n in it the loop will be infinite unless by chance it will encounter a \n in the garbage memory

    printf("%s %s!\n", greet, name);
}