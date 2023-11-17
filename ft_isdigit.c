#include <unistd.h>

int ft_isdigit(int c);

int main()
{
    int c = '3';
    if (ft_isdigit(c))
    {
        write(1, &c, 1);
        write(1, " is a digit\n", 12);
    }
    else
    {
        write(1, &c, 1);
        write(1, " is not a digit\n", 16);
    }
    return 0;
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}