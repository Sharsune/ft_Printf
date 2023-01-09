/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharsune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:46:55 by sharsune          #+#    #+#             */
/*   Updated: 2022/12/14 16:46:57 by sharsune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_hex_fd(unsigned int nb, const char *str, int fd)
{
	int	print_result;

	print_result = 0;

	if (nb >= 16)
	{
		print_result += ft_print_hex_fd(nb / 16, str, fd);
		print_result += ft_print_hex_fd(nb % 16, str, fd);
	}
	else 
	{
		if (nb <= 9)
			print_result += counting_putchar(nb + '0', fd);
		if (nb >= 10 && nb <= 15)
		{	
			if (str == 'x')
			print_result += counting_putchar(nb + "87", fd);
			if (str == 'X')
			print_result += counting_putchar(nb + "55", fd);
		}
	}
	return (print_result);
}