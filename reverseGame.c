#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Prototypes
int getInt(char prompt[], int min, int max);

void fillBoard(int arr[], int length);

void printBoard(int arr[], int length);

void shuffleBoard(int arr[], int length);

void reverse(int arr[], int length, int amt);

int isSorted(int arr[], int length);

int main()
{
    // Seed the random number generator
    srand(time(NULL));

    // Ask user for length of game, from 3-20
    int boardLength = getInt("Enter size of Board: ", 3, 20);

    printf("Board Length: %d.\n", boardLength);

    // Create board. Shuffle numbers.
    int board[boardLength];

    // Fill board in order with numbers 1...boardLength
    fillBoard(board, boardLength);
    printf("Board Filled !, \n");
    printBoard(board, boardLength);

    // Shuffle board.
    // I recommend initially only the shuffleBoard line
    // so it doesn't get stuck in an infinite loop. Once shuffleBoard
    // is working, uncomment the rest of the loop.
    // while (isSorted(board, boardLength) == 1)
    // {
    shuffleBoard(board, boardLength);
    // }

    // Print board
    printBoard(board, boardLength);

    int gameOver = 0;
    int moves = 0;
    while (!gameOver)
    {
        // Ask user for amount to reverse
        int amt = getInt("How many to reverse? ", 2, boardLength);

        // Reverse the first (amt) numbers
        reverse(board, boardLength, amt);

        // Print the board
        printBoard(board, boardLength);

        // Check if the game is over
        gameOver = isSorted(board, boardLength);

        moves++;
    }
    printf("You won in %d moves!\n", moves);
}

// Get an integer from the user.
//     Display the prompt.
//     Get input from user.
//     Check that the input is between the min and max, inclusive.
//     If not, display error message that includes the min and max.
//         then loop back to get input again.

int getInt(char prompt[], int min, int max)
{
    int output = 0;
    while (output < min || output > max)
    {
        printf("%s", prompt);
        scanf("%d", &output);
        if (output < min || output > max)
            printf("Value must be in range %d-%d!\n", min, max);
    }

    return output;
}

void fillBoard(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        arr[i] = i + 1;
    }
}

void printBoard(int arr[], int length)
{
    printf("Board: ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void shuffleBoard(int arr[], int length)
{
    for (int i = length - 1; i > 0; i--)
    {
        int j = rand() % i;
        // swap arr[i] and arr[j];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void reverse(int arr[], int length, int amt)
{
    for (int i = 0; i < amt / 2; i++)
    {
        int temp = arr[amt - i - 1];
        arr[amt - i - 1] = arr[i];
        arr[i] = temp;
    }
}

int isSorted(int arr[], int length)
{
    int isSorted = 0;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            isSorted = 0;
        }
        else
        {
            isSorted = 1;
        }
    }

    return isSorted;
}