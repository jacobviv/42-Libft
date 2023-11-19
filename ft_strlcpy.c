/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:15:26 by rbriongo          #+#    #+#             */
/*   Updated: 2023/11/17 18:14:24 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	main(void)
{
	char src[] = "Hello, world!";
	char dst[10];

	// Copy the string from src to dest using ft_strlcpy
	size_t num_chars_copied_string = ft_strlcpy(dst, src, sizeof(dst));

	// Print the number of characters from the string copied
	// ft_strlcpy returns the length of the source string
	printf("Number of characters from the copied string: %zu\n",
			num_chars_copied_string);

	// Print the contents of the destination buffer
	printf("Destination buffer: %s\n", dst);

	return (0);
}