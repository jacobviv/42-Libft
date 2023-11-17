#include <unistd.h>

int ft_isprint(int c);

int main()
{
    int  c = 109;
    if (ft_isprint(c))
    {
        write(1, &c, 1);
        write(1, " is a print\n", 12);
    }
    else
    {
        write(1, &c, 1);
        write(1, " is not a print\n", 16);
    }
    return 0;
}

int ft_isprint(int c)
{
    if (
        (c >= 40 && c <= 47) || (c >= 50 && c <= 57) || (c >= 60 && c <= 67) 
        || (c >= 70 && c <= 77) || (c >= 100 && c <= 107) || (c >= 110 && c <= 117) 
        || (c >= 120 && c <= 127) || (c >= 130 && c <= 137) || (c >= 140 && c <= 147) 
        || (c >= 150 && c <= 157) || (c >= 160 && c <= 167) || (c >= 170 && c <= 176)
        )
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}