#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(char *src)
{
    int i = 0;
    char *d;

    d = malloc((ft_strlen(src) + 1) * sizeof(char));
    if (d != NULL)
    {
        while (src[i])
        {
            d[i] = src[i];
            i++;
        }
        d[i] = '\0';
    }
    return(d);
}
