/*
    This program capitalize the first letter of a word in string
*/
#include <stdio.h>
#define SIZE 10
#define UPPER_LOWER_DIFF 32
#define ASCII_SPACE 32
#define HORIZ_TAB 9

void capitalize(char str[])
{
    // Check if the the first letter if the sentence is lowercase
    if (str[0] >= 97 && str[0] <= 122)
        str[0] = str[0] - UPPER_LOWER_DIFF;

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ASCII_SPACE || str[i] == HORIZ_TAB)
        {
            // Capitalize next element after SPACE
            if (str[i + 1] >= 97 && str[i + 1] <= 122)
                str[i + 1] = str[i + 1] - UPPER_LOWER_DIFF;
        }
        else if (str[i] == '\n')
        {
            // replace new line in char array
            str[i] = '\0';
        }
        i++;
    }
}

int main()
{
    // Needed variables
    char string[SIZE];

    // Get string from user throw keyboard
    printf("Enter the word to capitalize the first letter: ");
    fgets(string, SIZE, stdin);

    // Capitalize
    capitalize(string);

    // Output result
    printf("Capitalized: %s.", string);
}