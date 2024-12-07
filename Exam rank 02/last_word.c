#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
    int i = 0;

    if(ac == 2)
    {
        if(!av[1][i])
        {
            write(1, "\n", 1);
        }
        else
        {
    while(av[1][i])
    {
        i++;
    }
    while(av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n' || av[1][i] == '\0')
        i--;
    while(av[1][i] && !(av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n'))
    {
        i--;
    }
    i++;
    while(av[1][i])
    {
        write(1, &av[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    }
    }
    else {
        write(1, "\n", 1);
    }
}

// If we have something inside && what we have isn't a ' ' or a '\t' or a '\n'... write and go back.

