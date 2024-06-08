// #include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char test_str[] = "Hello, world!";

    printf("Length of the string : %d\n", ft_strlen(test_str));

    return 0;
}
