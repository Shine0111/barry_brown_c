/*
 This program draws a flag with the height giving by user
*/
#include <stdio.h>

int main()
{
    int poleHeightFromUser, poleHeight;

    // Input for pole height
    printf("Enter the height of the flag pole: ");
    scanf("%d", &poleHeightFromUser);

    // Check if poleHeightFromUser is in between 3 and 14
    if (poleHeightFromUser > 3 && poleHeightFromUser <= 14)
    {

        // Calculate the poleHeight
        poleHeight = poleHeightFromUser - 3;

        // Draw the flag
        printf("|------+\n");
        printf("|      |\n");
        printf("|------+\n");

        // Loop to draw the height
        for (int i = 0; i < poleHeight; i++)
        {
            printf("|\n");
        }
    }
    else if (poleHeightFromUser > 0 && poleHeightFromUser < 3)
    {
        return 0;
    }
    else if (poleHeightFromUser > -3 && poleHeightFromUser < 0)
    {
        return 0;
    }
    else if (poleHeightFromUser > 14 || poleHeightFromUser < -14)
    {
        return 0;
    }
    else
    {
        // Turn poleHeight to positive
        poleHeightFromUser = poleHeightFromUser * -1;

        // Calculate the poleHeight
        poleHeight = poleHeightFromUser - 3;

        // Loop to draw the height
        for (int i = 0; i < poleHeight; i++)
        {
            printf("       |\n");
        }
        // Draw the flag
        printf("+------|\n");
        printf("|      |\n");
        printf("+------|\n");
    }
}