/*
    From lecture's array lesson
*/
#include <stdio.h>
#include <stdlib.h> // for random()
#include <time.h>

#include <limits.h> // For minimun possible integer

#define SIZE 9

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

int sumArray(int arr[], int length)
{
    // initialize a variable to 0
    int sum = 0;
    // loop through the array and add value to the value of sum
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    // return the final value of sum
    return sum;
}

float averageArray(int arr[], int length)
{
    float sum = sumArray(arr, length);
    return sum / length;
}

void rotate(int arr[], int length)
{
    int temp = arr[0];
    for (int i = 0; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[length - 1] = temp;
}

void reverse(int arr[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[length - i - 1];
        arr[length - i - 1] = arr[i];
        arr[i] = temp;
    }
}

void shuffle(int arr[], int length)
{
    for (int iterations = 0; iterations < length * 3; iterations++)
    {
        // Take two random element in array
        int i = rand() % length;
        int j = rand() % length;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
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
    printf("Largest element is : %d.\n", max);

    // add up all the values inside the array
    int sum = sumArray(nums, SIZE);
    printf("Sum of values : %d.\n", sum);

    // compute the average
    float ave = averageArray(nums, SIZE);
    printf("Average of values : %f.\n", ave);

    // rotate the array
    printf("Rotate twice!\n");
    rotate(nums, SIZE);
    rotate(nums, SIZE);
    printArray(nums, SIZE);

    // reverse array
    printf("Reverse!\n");
    reverse(nums, SIZE);
    printArray(nums, SIZE);

    // shuffle using random swaping
    printf("Shuffle!\n");
    shuffle(nums, SIZE);
    printArray(nums, SIZE);
}