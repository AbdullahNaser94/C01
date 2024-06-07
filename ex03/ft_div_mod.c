//#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int* div, int* mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 3;

    ft_div_mod(a, b, &div, &mod);
    printf("Division: %d\n", div);
    printf("Modulus: %d\n", mod);
    return 0;
}
