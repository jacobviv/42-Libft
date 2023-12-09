/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbriongo <rbriongo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:03:25 by rbriongo          #+#    #+#             */
/*   Updated: 2023/12/09 16:13:56 by rbriongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ch;
	int				i;

	ch = (unsigned char *)b;
	i = 0;
	while (i < (int)len)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}

// int	main(void)
// {
// 	char buffer[20];
// 	char *result_ft, *result_std;

// 	// Test ft_memset
// 	result_ft = ft_memset(buffer, 'A', 10);
// 	printf("ft_memset result: %s\n", result_ft);

// 	// Test memset (standard library function)
// 	result_std = memset(buffer, 'B', 10);
// 	printf("memset result: %s\n", result_std);

// 	// Compare the results
// 	if (strcmp(result_ft, result_std) == 0)
// 		printf("Results match!\n");
// 	else
// 		printf("Results do not match.\n");

// 	return (0);
// }