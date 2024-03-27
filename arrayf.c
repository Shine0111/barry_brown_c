/*
    From lecture's array lesson
*/
#include <stdio.h>

#include <limits.h> // For minimun possible integer

#define SIZE 5

void inputArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &arr[i]);
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
    int nums[SIZE];

    inputArray(nums, SIZE);
    printArray(nums, SIZE);

    // find max function
    int max = findMax(nums, SIZE);

    printf("Largest element is : %d.", max);
}