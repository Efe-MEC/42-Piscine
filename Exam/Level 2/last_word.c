#include <unistd.h>

int main(int argc, char **argv)
{
    int j = 0;

    if (argc == 2)
    {
        int i = 0;
        while (argv[1][i])
        {
            i++;
        }
        i = i - 1;
        
       while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            i--;
        }
        j = i;
       while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
        {
            i--;
        }
        i++;
        while (i <= j)
        {
            write(1, &argv[1][i], 1);
            i++;
        }
        
    }       write(1, "\n", 1);
    return (0);
}
