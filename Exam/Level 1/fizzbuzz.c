#include <unistd.h>

void ft_number_print(int nb)
{
    char str[10] = "0123456789";

    if (nb > 9)
    {
        ft_number_print(nb / 10);
    }
    write(1, &str[nb % 10], 1);
}

int main ()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 15 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if (i % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            ft_number_print(i);
        }
        i++;
        write(1, "\n", 1);
    }
}