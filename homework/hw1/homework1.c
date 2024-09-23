#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int whileIsNotInt()
{
    int number;
    while (scanf(" %d", &number) != 1)
    {
        // Clear invalid input from buffer
        while (getchar() != '\n')
            ; // Consume the rest of the input line

        // Prompt the user to enter the input again
        printf("Invalid input! Please enter a valid integer: ");
    }
    return number;
}

char whileIsNotChar()
{
    char answer;
    while (true)
    {
        if (scanf(" %c", &answer) == 1 && (answer == 'y' || answer == 'n'))
        {
            return answer; // Valid input, exit loop
        }

        // Clear invalid input from buffer
        while (getchar() != '\n')
            ; // Consume the rest of the input line

        // Prompt the user to enter the input again
        printf("Invalid input! Please enter 'y' or 'n': ");
    }
}

int main()
{
    int *arrNumber;
    int n = 1;
    char answer = 'y';

    // allocate memory dynamically
    arrNumber = (int *)malloc(n * sizeof(int));
    if (arrNumber == NULL)
    {
        printf("Failed allocated memory.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter an integer: ");
        arrNumber[i] = whileIsNotInt();
    }

    printf("Do you want to continue enter integer?(y/n): ");
    answer = whileIsNotChar();
    while (answer == 'y')
    {
        int *tempArr;
        tempArr = (int *)realloc(arrNumber, ++n * sizeof(int));
        if (tempArr == NULL)
        {
            printf("Reallocation fail.\n");
            free(arrNumber);
            return 2;
        }

        arrNumber = tempArr;

        int number;
        printf("Enter an integer: ");
        arrNumber[n - 1] = whileIsNotInt();

        printf("Do you want to continue enter integer?(y/n): ");
        answer = whileIsNotChar();
    }

    for (int i = 0; i < n; i++)
    {
        printf("arrNumber[%d]: %d\n", i, arrNumber[i]);
    }

    free(arrNumber);
    return 0;
}