#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


#include <unistd.h>

void ft_print_comb(void)
{
    char a = '0';
    char b = '1';
    char c = '2';
    int mix;

    while(a <= '7')
    {
         b = a + 1;

        while(b <= '8')
        {
             c = b + 1;
            while(c <= '9')
            {
                if(isdigit(c))
                {
                    c -= 48;
                    b -= 48;
                    a -= 48;
                }
                printf("%d", c);
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if(c < '9' && b < '8' && a < '7')
                {
                    c += 48;
                    b += 48;
                    a += 48;
                    mix = a + b + c;
                    if(mix < 312)
                    {
                        write(1, ", ", 2);
                    }
                }

            c++;
            }
            b++;
        }
            a++;

    }
}

int main()
{
    ft_print_comb();
}