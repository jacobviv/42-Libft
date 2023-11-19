/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:55:21 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/28 18:24:08 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 'a' + 'A';
	}
	return (c);
}

// int	main(void)
// {
// 	int	c;

// 	c = 'b';
// 	write(1, &c, 1);
// 	write(1, " is the lowercase\n", 18);
// 	c = ft_toupper(c);
// 	write(1, &c, 1);
// 	write(1, " is the uppercase\n", 18);
// 	return (c);
// }
