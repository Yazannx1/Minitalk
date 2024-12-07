#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{

    if(ac != 4)
        printf("habibi write 4 arguments please :)");

    if(ac == 4)
    {
    int num1 = atoi(av[1]);
    int num2 = atoi(av[3]);
    int res = 0;

    if(av[2][0] == '+')
        res = num1 + num2;
    else if(av[2][0] == '-')
        res = num1 - num2;
    else if(av[2][0] == '*')
        res = num1 * num2;
    else if(av[2][0] == '/')
        res = num1 / num2;
    else if(av[2][0] == '%')
        res = num1 % num2;

    printf("%d", res);
    }


}