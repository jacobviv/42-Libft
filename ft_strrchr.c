/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:03:17 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/29 17:12:09 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	while (n > 0 && s[n] != (char)c)
		n--;
	if (s[n] == (char)c)
	{
		return ((char *)&s[n]);
	}
	else
	{
		return (NULL);
	}
}

// int	main(void)
// {
// 	char str[] = "hello world";
// 	char *result = ft_strrchr(str, 'l');
// 	if (result == NULL)
// 	{
// 		printf("The character was not found.\n");
// 	}
// 	else
// 	{
// 		printf("The last occurrence of the character was at position %ld.\n",
// 				result - str);
// 	}
// 	return (0);
// }