#include <unistd.h>

int ft_isalpha(int c);

int main()
{
    int  c = 'a';
    if (ft_isalpha(c))
    {
        write(1, &c, 1);
        write(1, " is an alpha\n", 13);
    }
    else
    {
        write(1, &c, 1);
        write(1, " is not an alpha\n", 17);
    }
    return 0;
}

int ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'x')
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}