#include <unistd.h>

int ft_isalnum(int c);

int main()
{
    int c = '?';
    if (ft_isalnum(c))
    {
        write(1, &c, 1);
        write(1, " is a num or alpha\n", 19);
    }
    else
    {
        write(1, &c, 1);
        write(1, " is not a num or alpha\n", 23);
    }
    return 0;
}

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'x'))
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}