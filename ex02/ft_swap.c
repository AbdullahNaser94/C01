#include <stdio.h>
//#include <unistd.h>

void ft_swap(int* a, int* b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x;
    int y;

    x = 5;
    y = 10;
    printf("Before: x = %d, y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After: x = %d, y = %d\n", x, y);
    return 0;
}