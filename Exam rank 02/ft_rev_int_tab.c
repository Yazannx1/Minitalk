#include <stdio.h>
// Create a function which reverses a given array 
//of integer (first goes last, etc).
// • The arguments are a pointer to int and the number of ints in the array.
// • Here’s how it should be prototyped :
int ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;
     // 5
    printf(":%d: THIS IS ME \n\n\n\n", size);
    while(i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = temp;
                printf("%d,", tab[i]);
        i++;
    }
    printf("%d", tab[i]);
    return(i);
}

int main(void)
{
    int i = 1;
    int tab[] = {1, 3, 5, 7, 8};
    int size = sizeof(tab) / sizeof(tab[0]);
    printf("%d", ft_rev_int_tab(tab, size));

}