#include <unistd.h>

int ft_isascii(int c);

int main()
{
    int  c = 179;
    if (ft_isascii(c))
    {
        write(1, &c, 1);
        write(1, " is an ascii\n", 13);
    }
    else
    {
        write(1, &c, 1);
        write(1, " is not an ascii\n", 17);
    }
    return 0;
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 177)
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}