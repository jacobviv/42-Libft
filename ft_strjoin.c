/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:16:25 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 18:18:18 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*pointer;

	if (s1 && s2)
	{
		pointer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (pointer == NULL)
			return (NULL);
		i = 0;
		while (*s1)
		{
			pointer[i] = *s1++;
			i++;
		}
		while (*s2)
		{
			pointer[i] = *s2++;
			i++;
		}
		pointer[i] = '\0';
		return (pointer);
	}
	return (NULL);
}
