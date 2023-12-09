/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:10:56 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 17:31:08 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src_s;
	char	*dst_s;

	src_s = (char *)src;
	dst_s = (char *)dst;
	if (!src_s && !dst_s)
		return (0);
	i = 0;
	if (dst_s > src_s)
	{
		while (len-- > 0)
		{
			dst_s[len] = src_s[len];
		}
	}
	else
	{
		while (i < len)
		{
			dst_s[i] = src_s[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char		dst[50];
// 	char		*result;
// 	const char	*src;

// 	src = "captain_america";
// 	strncpy(dst, "hgfd", sizeof(dst) - 1);
// 	dst[sizeof(dst) - 1] = '\0';
// 	result = ft_memmove(dst, src, strlen(src) + 1);
// 	printf("%s\n", result);
// 	printf("%s\n", memmove(dst, src, strlen(src) + 1));
// 	return (0);
// }
