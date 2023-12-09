/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:25:14 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 15:57:24 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	j;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_dst = 0;
	while (dst[len_dst] && len_dst < dstsize)
	{
		len_dst++;
	}
	j = 0;
	while (src[j] && (len_dst + j + 1) < dstsize)
	{
		dst[len_dst + j] = src[j];
		j++;
	}
	if (len_dst < dstsize)
		dst[len_dst + j] = '\0';
	return (len_dst + len_src);
}

// int main()
// {
//     char destination[20] = "Hello, ";
//     const char *source = "world!";
//     size_t result;

//     printf("Original destination: %s\n", destination);

//     // Call your ft_strlcat function
//     result = ft_strlcat(destination, source, sizeof(destination));

//     // Print the result and the modified destination string
//     printf("Result: %zu\n", result);
//     printf("Concatenated string: %s\n", destination);

//     return (0);
// }
