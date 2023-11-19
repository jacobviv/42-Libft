/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:13:42 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/28 16:51:06 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z') || (c >= 'A'
				&& c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);
}

// int main()
// {
//     int c = '?';
//     if (ft_isalnum(c))
//     {
//         write(1, &c, 1);
//         write(1, " is a num or alpha\n", 19);
//     }
//     else
//     {
//         write(1, &c, 1);
//         write(1, " is not a num or alpha\n", 23);
//     }
//     return (0);
// }