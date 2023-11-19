/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:13:37 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/28 16:49:50 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

// int main()
// {
//     int c = '3';
//     if (ft_isdigit(c))
//     {
//         write(1, &c, 1);
//         write(1, " is a digit\n", 12);
//     }
//     else
//     {
//         write(1, &c, 1);
//         write(1, " is not a digit\n", 16);
//     }
//     return (0);
// }