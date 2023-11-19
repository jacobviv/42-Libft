/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:12:33 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/29 17:22:48 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

// int main(void)
// {
//     char my_string[] = "Hello, world!";
//     int my_string_len = ft_strlen(my_string);
//     printf("The length of my string is %d\n", my_string_len);

//     char empty_string[] = "";
//     int empty_string_len = ft_strlen(empty_string);
//     printf("The length of the empty string is %d\n", empty_string_len);

//     char another_string[] = "Lorem ipsum dolor sit amet";
//     int another_string_len = ft_strlen(another_string);
//     printf("The length of another string is %d\n", another_string_len);

//     return (0);
// }