#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void allocateMemory(int **ptr, int size)
{
    *ptr = (int *)malloc(size * sizeof(int));
    if (*ptr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

int main()
{
    srand(time(NULL));
    int *arr;
    int size = 5;

    allocateMemory(&arr, size);

    // Populate array
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand();
    }
    
    // Print array
    printf("Elements in the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}