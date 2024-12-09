#include "minitalk.h"


int ft_atoi(char *str)
{
    int index;
    int sign;
    long res;

    index = 0;
    sign = 1;
    res = 0;
    while((str[index] == ' ') || (str[index] >= 9 && str[index] <= 13))
        index++;
    if(str[index] == '+' || str[index] == '-')
    {
        if (str[index] == '-')
            sign = -1;
        index++;
    }
    while(str[index])
    {
        res *= 10;
        res += str[index] - 48;
        index++;
    }
    res *= sign;
    return((int)res);
}

int main(int ac, char **av)
{
    int index;
    int i;
    char c;
    int bit;

    i = 0;

    if(ac == 3)
    {
        
        int pid = ft_atoi(av[1]);
        while(av[2][i])
        {
            c = av[2][i];
            index = 7;
            while(index >= 0)
            {
                bit = c >> index & 1;
                if(bit == 1)
                    kill(pid, SIGUSR1);
                else
                    kill(pid, SIGUSR2);
                index--;
                usleep(300);
            }
            i++;
        }
        c = '\0';
        index = 7;
        while(index >= 0)
        {
            bit = c >> index & 1;
            if(bit == 1)
                kill(pid, SIGUSR1);
            else
                kill(pid, SIGUSR2);

            index--;
            usleep(300);
        }
    }
    else {
        printf("ERROR! My friend\n");
        return(1);
    }
}























 