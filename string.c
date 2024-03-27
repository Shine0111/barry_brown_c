#include <stdio.h>
#define SIZE 10

int main()
{
    char greet[SIZE] = "hello";

    char name[SIZE];
    printf("Enter your name: ");

    fgets(name, SIZE, stdin);

    printf("%s %s!\n", greet, name);
}