#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if((n % 2) == 0)
    {
        return(1);
    }
    else {
        return(0);
    }
}

int main(void)
{
    unsigned int n = 5;

    printf("%d", is_power_of_2(n));
}