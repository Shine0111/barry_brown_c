/*
    A program that calculates the area of a rectangle.
*/
#include <stdio.h>

// main function
int main()
{
    // declaration of area, height and width variables
    int area, height, width;

    // Get inputs from user with H and W spaced with a space
    printf("Enter the height and the width of a rectangle> ");
    scanf("%d%d", &height, &width);

    // Calculate the area
    area = height * width;

    // Output the result
    printf("The area is %d sq in.\n", area);

    return (0);
}