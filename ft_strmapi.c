/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:57:36 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 18:59:06 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*pointer;

	pointer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!pointer)
		return (NULL);
	i = 0;
	while (s[i])
	{
		pointer[i] = f(i, s[i]);
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
