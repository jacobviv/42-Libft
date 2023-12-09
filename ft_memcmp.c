/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:45:03 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 17:45:18 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1_s;
	const unsigned char	*s2_s;

	i = 0;
	s1_s = (const unsigned char *)s1;
	s2_s = (const unsigned char *)s2;
	while (i < n)
	{
		if (s1_s[i] != s2_s[i])
			return (s1_s[i] - s2_s[i]);
		i++;
	}
	return (0);
}
