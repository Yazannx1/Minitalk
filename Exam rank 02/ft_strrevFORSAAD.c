#include <stdio.h>

char *ft_strrev(char *str)
{
    int i;

    i = 0;

    while(str[i])
    {
        i++;
    } // First!! we count how many characters we have.

    while(i >= 0)
    {
        printf("%c", str[i]);
        i--;
    }
}

int main(void)
{
    char *str = "Saad the strong boy";

    printf("%s", ft_strrev(str));
}