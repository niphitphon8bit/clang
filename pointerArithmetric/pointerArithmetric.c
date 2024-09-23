#include <stdio.h>

int main()
{
    int arr[5] = {01, 20, 34, 34, 25};
    int *ptr = arr;

    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i)); // Access using pointer arithmetic
    }

    return 0;
}