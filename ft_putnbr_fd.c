/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:07:41 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/10 17:17:32 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	c;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		n = n * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n <= 9)
		c = n;
	else
	{
		c = n % 10;
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd(c + '0', fd);
}
