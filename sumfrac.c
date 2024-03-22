/*
    This program calculates the sum of two fractions.
*/
#include <stdio.h>

int main()
{
    // Declaration of all useful variables
    int num1, denom1, num2, denom2, numSum, denomSum;
    double sum;

    // Getting inputs of both fractions from user
    printf("This program will sum two fractions.\n");

    // Input for first fraction
    printf("Input the first fraction: ");
    scanf("%d /%d", &num1, &denom1);

    // Input for second fraction
    printf("Input the second fraction: ");
    scanf("%d /%d", &num2, &denom2);

    // Algorithm to sum the two fractions
    // Step 1: Num operation
    numSum = (num1 * denom2) + (num2 * denom1);

    // Step 2: Denom operation
    denomSum = denom1 * denom2;

    // Step 3: Sum operation
    sum = numSum / denomSum;

    // Output the result in fraction
    printf("The sum is : %d/%d.", numSum, denomSum);

    if (sum >= 1)
    {
        printf("Sum : %f", sum);
    }
}