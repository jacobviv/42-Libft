/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:55:21 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/28 18:24:04 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c - 'A' + 'a';
	}
	return (c);
}

// int	main(void)
// {
// 	int c;

// 	c = 'R';
// 	write(1, &c, 1);
// 	write(1, " is the uppercase\n", 18);
// 	c = ft_tolower(c);
// 	write(1, &c, 1);
// 	write(1, " is the lowercase\n", 18);
// 	return (c);
// }