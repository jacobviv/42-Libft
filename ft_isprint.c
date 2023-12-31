/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:11:59 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/28 17:03:57 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	else
		return (0);
}

// int main()
// {
//     int  c = 109;
//     if (ft_isprint(c))
//     {
//         write(1, &c, 1);
//         write(1, " is a print\n", 12);
//     }
//     else
//     {
//         write(1, &c, 1);
//         write(1, " is not a print\n", 16);
//     }
//     return (0);
// }