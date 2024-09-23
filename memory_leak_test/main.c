//
//  main.c
//  memory_leak_test
//
//  Created by Niphitphon Thanatkulkit on 14/8/2567 BE.
//

#include "main.h"


int main() {
    int *ptr = malloc(sizeof(int) * 5); // Allocate memory for 5 integers

    // Intentionally forgetting to free the allocated memory
    // free(ptr); // Uncommenting this line will fix the memory leak

    int number = 0;
    scanf("%d",&number);

    return 0;
}

