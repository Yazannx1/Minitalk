#include <unistd.h>

int main(int ac, char **av)
{

    int i;
    int j;

    i = 0;

    if(ac == 3)
    {
        while(av[1][i])
        {
            if(av[1][i] == av[2][j])
            {
                if(av[1][i - 1] != av[1][i])
                {
                    write(1, &av[1][i], 1);
                }
                i++;
            }
            j++;
        }
    }
}