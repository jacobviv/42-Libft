/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:20:21 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 17:11:41 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dst;
	if (!a && !b)
		return (NULL);
	i = 0;
	while (i < n)
	{
		b[i] = a[i];
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char dst[50] = "";
// 	char src[] = "ultraman";
// 	char *result;
// 	result = ft_memcpy(dst, src, 3);
// 	printf("%s\n", result);
// 	printf("%s\n", memcpy(dst, src, 3));
// 	return (0);
// }