// #include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

int main()
{
    int a;
    int b;

    a = 10;
    b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("Division result: %d\n", a);
    printf("Modulus result: %d\n", b);
    return 0;
}
