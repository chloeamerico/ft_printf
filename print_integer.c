/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <camerico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 17:41:58 by camerico          #+#    #+#             */
/*   Updated: 2024/11/29 18:30:45 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	print_integer(int n)
{
	char *str;
	int	len;

	str = ft_itoa(n);
	if (!str)
		return (0);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

// int	main(void)
// {
// 	int	n = -12345;

// 	printf("%i", print_integer(n));
// 	return (0);
// }