/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:12:12 by rbriongo          #+#    #+#             */
/*   Updated: 2023/03/28 16:48:35 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

// int main()
// {
//     int  c = 'a';
//     if (ft_isalpha(c))
//     {
//         write(1, &c, 1);
//         write(1, " is an alpha\n", 13);
//     }
//     else
//     {
//         write(1, &c, 1);
//         write(1, " is not an alpha\n", 17);
//     }
//     return (0);
// }