/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharsune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:39:27 by sharsune          #+#    #+#             */
/*   Updated: 2022/12/14 16:39:28 by sharsune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_unsigned_fd(unsigned int nb, int fd)
{
	long	temp;
	int		print_result;
	
	temp = nb;
	print_result = 0;

	if (temp > 9)
	{
		print_result += ft_print_unsigned_fd(temp / 10, fd);
		print_result += ft_print_unsigned_fd(temp % 10, fd);
	}
	else
		print_result += counting_putchar(temp + '0', fd);
	return (print_result);
}
