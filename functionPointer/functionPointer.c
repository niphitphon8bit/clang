#include <stdio.h>

int multiply(int x, int y)
{
    return x * y;
}

int calculator(int x, int y, int (*func)(int, int))
{
    return func(x, y);
}

int main()
{
    int result;

    result = calculator(10, 20, multiply);
    printf("%d \n", result);
    return 0;
}