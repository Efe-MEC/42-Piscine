int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return (i);
}

char    *ft_strrev(char *str)
{
    char temp;
    int i = 0;
    int len;

    len = ft_strlen(str);
    while(i < len / 2)
    {
        temp = str[i];
        str[i] = str[len -i -1];
        str[len -i -1] = temp;
        i++;
    }
    return(str);
}

#include <stdio.h>

int main()
{
    char str[] = "kerem";
    char *reversed = ft_strrev(str);
    printf ("%s", reversed);
}