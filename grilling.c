/*
    This program will draw a BBQ grills
*/
#include <stdio.h>

void drawHorizontalLines(int width)
{
    for (int i = 0; i < width - 2; i++)
    {
        printf("-");
    }
}

void drawVertical(int height, int width)
{
    for (int i = 0; i < height - 2; i++)
    {
        printf("|");
        drawHorizontalLines(width);
        printf("|\n");
    }
}

// main function
int main()
{
    // Variables
    int width, height;

    // Get data from user
    printf("Enter the width of our grill: ");
    scanf("%d", &width);
    printf("Enter the height of our grill: ");
    scanf("%d", &height);

    if (width < 2 || width > 30)
    {
        if (width < 2)
        {
            printf("Grill width is too short.\n");
        };
        if (width > 30)
        {
            printf("Grill width is too long.\n");
        };

        printf("The with must be 2-30 and the height must be 2-12.\n");
        return 0;
    }

    if (height < 2 || height > 12)
    {
        if (height < 2)
        {
            printf("Grill height is too low.\n");
        };
        if (height > 12)
        {
            printf("Grill height is too high.\n");
        };
        printf("The with must be 2-30 and the height must be 2-12.\n");
        return 0;
    }

    // Draw the grill
    printf("+");
    drawHorizontalLines(width);
    printf("+\n");

    drawVertical(height, width);

    printf("+");
    drawHorizontalLines(width);
    printf("+");
}