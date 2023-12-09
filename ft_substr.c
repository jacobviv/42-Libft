/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:08:31 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 18:11:06 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*pointer;
	size_t			size;
	unsigned int	i;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	pointer = (char *)malloc(sizeof(char) * (len + 1));
	if (!pointer)
		return (NULL);
	i = 0;
	while (i < len)
	{
		pointer[i] = s[i + start];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}

// int	main(void)
// {
// 	char *s = "hola";
// 	size_t size = 18446744073709551615;
// 	printf("%s", ft_substr(s, 4294967295, size));
// }