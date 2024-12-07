#include <stdio.h>

char *ft_strrev(char str[])
{
    int i;
    int j;
    char temp;

    j = 0;
    i = 0;

    while(str[i])
        i++;

    char new[i + 1];

    i -= 1; 
    while(j < i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        i--;
        j++;
    }
    return(str);
}

int main(void)
{
    char str[] = "Saad the strong boy";

    printf("%s", ft_strrev(str));
}