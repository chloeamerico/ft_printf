/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <camerico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:56:22 by camerico          #+#    #+#             */
/*   Updated: 2024/11/29 18:25:02 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	print_char(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

int	print_unsigned(unsigned int n)
{
	int	i;
	char	c;

	i = 0;
	if (n >= 10)
		i += print_unsigned(n / 10);
	c = (n % 10) + 48;
	i += print_char(c);
	return (i);
}

// int	main(void)
// {
// 	unsigned int	n = 12345;

// 	printf("%u", print_unsigned(n));
// 	return (0);
// }