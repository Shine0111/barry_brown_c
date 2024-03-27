#include <stdio.h>
#define SIZE 10

int main()
{
    char greet[SIZE] = "hello";

    char name[SIZE];
    printf("Enter your name: ");
    scanf("%9s", name); // Without the ampersand--> & , because it's an array not a primitive type.
    printf("%s %s\n", greet, name);
}