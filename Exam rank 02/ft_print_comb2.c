#include <stdio.h>

void ft_print_comb2(void)
{
    char c = '0';
    char d = '0';
while (c < '9')
{
    if(d == '9')
    {
        write(1, &d, 1);
        write(1, " D", 1);
        d = '0';
        c = c + 1;
        write(1, &c, 1);
    }
    else {
        write(1, &d, 1);
        write(1, "   D", 4);
        write(1, "\n", 1);
        d = d + 1;
    }
}
}

// int main()
// {
//     ft_print_comb2();
// }


// /*
// step 1: I wanna count from 0-99
// step 2: 

// 00 00
// */