int	ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    int i;

    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result = result + str[i] - '0';
        i++;
    }
    result *= sign;
    return(result);
}
