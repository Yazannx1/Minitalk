#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
        while(s1[i])
        {
            if(s1[i] == s2[i])
            {
                i++;
            }
            else if (s1[i] > s2[i]) {

            }
        }
}

int main(void)
{
    char *s1 = "Yazan";
    char *s2 = "Yasser";

    printf("%s", ft_strcmp(s1, s2));
}