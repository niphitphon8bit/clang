#include <stdio.h>
#include <stdlib.h>

int main(){

    int *arr;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Populate array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Print array
    printf("Elements in the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // // Free the memory
    // free(arr);

    int new_n;
    printf("Enter new number of elements: ");
    scanf("%d", &new_n);

    arr = (int *)realloc(arr, new_n * sizeof(int));
    if(arr == NULL){
        printf("Reallocation fail.\n");
        return 2;
    }

    for(int i = n; i < new_n ; i++){
        // printf("%d ", i);
        arr[i] = i + 1;
        // printf("%d ", arr[i]);
    }

    for (int i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the memory
    free(arr);

    return 0;
}