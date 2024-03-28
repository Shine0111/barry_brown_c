#include <stdio.h>
#define SIZE 10

int countUpper(char str[])
{
    int i = 0;
    int uppers = 0;        // variable to store the number of upper from the counter loop
    while (str[i] != '\0') // stop on the \0 since any regular array is null terminated
    {
        if (str[i] >= 65 && str[i] <= 90) // Using their ASCII code
        {
            uppers++;
        }

        i++;
    }

    return uppers;
}

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

    // Count the number of upperCase character in the string
    int uppers = countUpper(name); // When we pass string into a function, we don't need to pass the length

    printf("There is %d upper cases in your name!", uppers);
}