#include <stdio.h>

char *ft_strpbrk(const char *s, const char *charset)
{
    int i;
    int j;

    i = 0;
    while(s[i])
    {
        j = 0;
        while(charset[j])
        {
            if(s[i] == charset[j])
            {
                return((char *)&s[i]);
            }
            j++;
        }
        i++;
    }
    return(NULL);
}

int main(void)
{
    char *s = "yazan";
    char *charset = "habibi";

    printf("%s", ft_strpbrk(s, charset));
}