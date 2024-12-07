#include <unistd.h>
#include <stdio.h>


void ft_putnbr(int nb)
{
    int emptyNumber;

    while(nb > 9)
    {
        emptyNumber = nb % 10;
        emptyNumber += 48;
        while(nb > 9)
        {
            nb /= 10;
        }
            nb += 48;
            write(1, &nb, 1);
            nb -= 48;
            write(1, &emptyNumber, 1);
    }
}

int main(void)
{
    ft_putnbr(42);
}