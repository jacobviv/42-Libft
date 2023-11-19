/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:03:17 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/29 13:38:16 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (1)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*str;
// 	char		search_char;
// 	char		*result;

// 	str = "Hello, world!";
// 	search_char = 'm';
// 	result = ft_strchr(str, search_char);
// 	if (result != NULL)
// 	{
// 		printf("Found '%c' in string: %s\n", search_char, str);
// 		printf("Result: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Did not find '%c' in string: %s\n", search_char, str);
// 	}
// 	return (0);
// }
