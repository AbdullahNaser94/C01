//#include <unistd.h>
#include <stdio.h>

void ft_putstr(char* str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    write(1, str, i);
}

int main()
{
    char str[] = "Hello, world!\n";

    ft_putstr(str);
    return 0;
}
