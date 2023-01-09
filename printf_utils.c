/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharsune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:35:53 by sharsune          #+#    #+#             */
/*   Updated: 2022/12/12 20:35:55 by sharsune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_pointer_fd(unsigned long long nb, int fd)
{
	int	print_result;

	print_result = 0;

	if (nb >= 16)
	{
		print_result += ft_print_pointer_fd(nb / 16, fd);
		print_result += ft_print_pointer_fd(nb % 16, fd);
	}
	else 
	{
		if (nb <= 9)
			print_result += counting_putchar(nb + '0', fd);
		if (nb >= 10 && nb <= 15)
			print_result += counting_putchar(nb + "87", fd);
	}
	return (print_result);
}