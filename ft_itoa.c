/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:26:11 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/10 18:25:15 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	sign_number(long num)
{
	int	sign;

	sign = 1;
	if (num < 0)
		sign = -1;
	return (sign);
}

int	count_number_digits(long num, int sign)
{
	int	len;

	len = 1;
	if (sign == -1)
	{
		num = num * (-1);
		len++;
	}
	while (num >= 10)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		sign;
	long	num;
	int		len;

	num = n;
	sign = sign_number(num);
	len = count_number_digits(num, sign);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (sign == -1)
	{
		str[0] = '-';
		num = num * (-1);
	}
	while (num >= 10)
	{
		str[len - 1] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	str[len - 1] = num + '0';
	return (str);
}

// int	main(void)
// {
// 	int	num;

// 	num = 2;
// 	printf("SOLUCION: %s\n", ft_itoa(num));
// }
