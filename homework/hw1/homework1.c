#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arrNumber;
    int n = 1;
    char answer = 'y';

    // allocate memory dynamically
    arrNumber = (int *)malloc(n * sizeof(int));
    if (arrNumber == NULL)
    {
        printf("failed allocated memory.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        int number;
        printf("Enter an integer: ");
        scanf("%d", &number);
        arrNumber[i] = number;
    }

    printf("do you want to continue enter integer?(y/n): ");
    scanf(" %c", &answer);
    while (answer == 'y')
    {

        arrNumber = (int *)realloc(arrNumber, ++n * sizeof(int));
        if (arrNumber == NULL)
        {
            printf("Reallocation fail.\n");
            return 2;
        }

        int number;
        printf("Enter an integer: ");
        scanf("%d", &number);
        arrNumber[n - 1] = number;

        printf("do you want to continue enter integer?(y/n): ");
        scanf(" %c", &answer);
    }

    for (int i = 0; i < n; i++)
    {
        printf("arrNumber[%d]: %d\n", i, arrNumber[i]);
    }

    free(arrNumber);
    return 0;
}