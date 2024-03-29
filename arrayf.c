/*
    From lecture's array lesson
*/
#include <stdio.h>
#include <stdlib.h> // for random()
#include <time.h>

#include <limits.h> // For minimun possible integer

#define SIZE 10

void fillArrayRandom(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = rand() % 50 - 10; // Get a random number btwn -10 and 39
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d:%d ", i, arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int length)
{
    int largestSoFar = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] > largestSoFar)
            largestSoFar = arr[i];
    }
    return largestSoFar;
}

int main()
{
    // Use time as seed for rand() || we can also use the poll of entropy in the system
    srand(time(NULL));

    int nums[SIZE];

    fillArrayRandom(nums, SIZE);
    printArray(nums, SIZE);

    // find max function
    int max = findMax(nums, SIZE);

    printf("Largest element is : %d.", max);
}