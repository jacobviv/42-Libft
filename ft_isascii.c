/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:12:20 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/28 17:51:13 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

// int main()
// {
//     int  c = 179;
//     if (ft_isascii(c))
//     {
//         write(1, &c, 1);
//         write(1, " is an ascii\n", 13);
//     }
//     else
//     {
//         write(1, &c, 1);
//         write(1, " is not an ascii\n", 17);
//     }
//     return (0);
// }