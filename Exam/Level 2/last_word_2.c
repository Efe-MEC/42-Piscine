#include <unistd.h>
#include <string.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    if (argv[1][0] == '\0')
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    while (argv[1][i])
    {
        i++;
    }
    i = i - 1;
    while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        i--;
    int j = i;
    while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
        i--;
    i++;
    while (i <= j)
    {
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return 0;
}







