#include <stdio.h>

int ft_strlen(const char *str);

int main(void)
{
    char my_string[] = "Hello, world!";
    int my_string_len = ft_strlen(my_string);
    printf("The length of my string is %d\n", my_string_len);

    char empty_string[] = "";
    int empty_string_len = ft_strlen(empty_string);
    printf("The length of the empty string is %d\n", empty_string_len);

    char another_string[] = "Lorem ipsum dolor sit amet";
    int another_string_len = ft_strlen(another_string);
    printf("The length of another string is %d\n", another_string_len);

    return 0;
}

int ft_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }
    return len;
}
