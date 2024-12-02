/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointeur.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camerico <camerico@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:47:44 by camerico          #+#    #+#             */
/*   Updated: 2024/12/02 17:23:15 by camerico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		str = "(null)";
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}

int	print_hexa(unsigned long n, const char format)
{
	int	len;
	char *hexa;

	len = 0;
	if (format == 'x')
		hexa = "0123456789abcdef";
	if (format == 'X')
		hexa = "0123456789ABCDEF";
	if (n >= 16)
		len += print_hexa(n / 16, format);
	len += ft_putchar(hexa[n % 16]);
	return (len);
}

// imprime un pointeur avec une sortie en format hexadecimal
int	print_pointeur(void *ptr)
{
	int	len;
	unsigned long	adress;
	
	adress = (unsigned long)ptr;
	len = 2;
	if (!adress)
	{
		len += ft_putstr("(nil)");
		return (5);
	}
	write (1, "0x", 2);
	len += print_hexa(adress, 'x');
	return (len);
}

// int main(void)
// {
//     printf("Test 1 : ");
//     // printf("\n");
//     print_pointeur(NULL); // Doit afficher : 0x0
// 	printf("\n");

//     printf("Test 2 : ");
//     printf("%p %p %p", (void *)0, (void *)0, (void *)0); 
//     printf("\n");

//     printf("Test 3 : ");
//     print_pointeur((void *)0);
//     printf(" ");
//     print_pointeur((void *)0);
//     printf(" ");
//     print_pointeur((void *)0);
//     printf("\n");

//     return 0;
// }

int main(void)
{
	// char *str = "COUCOU";
	printf("printf de 42 : %d\n", 42);
	printf("printf de 42 : %u\n", -42);
	printf("printf de 42 : %c\n", 'c');
	printf("printf de 42 : %s\n", "COUCOU LES LOULOUS");
	// printf("printf de 42 : %p\n", (void *)str);
	// print_pointeur((void *)str);
	printf("printf de (nil) : %p\n", (void *)0);
	print_pointeur((void *)0);
    return 0;
}