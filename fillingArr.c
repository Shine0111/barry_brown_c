/*
    This program fill arrays
*/
#include <stdio.h>
#define SIZE 26

int main()
{
    // the array
    int elements[SIZE];

    // Fill elements 0-9 with the values 0...9
    for (int i = 0; i < 11; i++)
    {
        elements[i] = i;
    }

    // Fill elements 10-19 with the values 100...190
    for (int i = 10; i < SIZE; i++)
    {
        elements[i] = i * 10;
    }

    elements[20] = 4;
    elements[21] = 8;
    elements[22] = 15;
    elements[23] = 16;
    elements[24] = 23;
    elements[25] = 42;

    // Print the array
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d:%d ", i, elements[i]);
    }
    printf("\n");
}