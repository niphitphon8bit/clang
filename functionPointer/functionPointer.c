#include <stdio.h>
#include <string.h>

// Function declarations for arithmetic operations
int multiply(int x, int y)
{
    return x * y;
}

int sumarize(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int dividedBy(int x, int y)
{
    return x / y;
}

int modulator(int x, int y)
{
    return x % y;
}

// Function that uses function pointers for calculation
int calculator(int x, int y, int (*func)(int, int))
{
    return func(x, y);
}

// Function to select the appropriate function based on the operator string
int (*select_operation(const char *op))(int, int)
{
    if (strcmp(op, "multiply") == 0)
    {
        return multiply;
    }
    else if (strcmp(op, "sumarize") == 0)
    {
        return sumarize;
    }
    else if (strcmp(op, "subtract") == 0)
    {
        return subtract;
    }
    else if (strcmp(op, "dividedBy") == 0)
    {
        return dividedBy;
    }
    else if (strcmp(op, "modulator") == 0)
    {
        return modulator;
    }
    else
    {
        return NULL;
    }
}

int main()
{
    int result;
    char operation[20];
    int number1, number2;

    // Ask user for the operation
    printf("Enter operation (multiply, sumarize, subtract, dividedBy, modulator): ");
    scanf("%s", operation);

    // Select the function based on input
    int (*operation_func)(int, int) = select_operation(operation);

    if (operation_func != NULL)
    {
        // Call the calculator with the selected function
        printf("Enter 2 number: ");
        scanf("%d %d", &number1, &number2);
        result = calculator(number1, number2, operation_func);
        printf("Result: %d\n", result);
    }
    else
    {
        printf("Invalid operation.\n");
    }

    return 0;
}
