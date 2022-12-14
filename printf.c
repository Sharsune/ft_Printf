/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharsune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:43:47 by sharsune          #+#    #+#             */
/*   Updated: 2022/12/12 15:43:49 by sharsune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//• %c Prints a single character.
//• %s Prints a string (as defined by the common C convention).
//• %p The void * pointer argument has to be printed in hexadecimal format.
//• %d Prints a decimal (base 10) number.
//• %i Prints an integer in base 10.
//• %u Prints an unsigned decimal (base 10) number.
//• %x Prints a number in hexadecimal (base 16) lowercase format.
//• %X Prints a number in hexadecimal (base 16) uppercase format.
//• %% Prints a percent sign.

#include "libftprintf.h"

int	counting_putchar(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	printstr_fd(char *str, int fd)
{
	int	i;
	int	print_result;

	i = 0;
	print_result = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		print_result += counting_putchar(str[i], fd);
		i++;
	}
	return (print_result);
}

int	printnbr_fd(int nb, int fd)
{
	long	temp;
	int		print_result;
	
	temp = nb;
	print_result = 0;
	if (nb < 0)
	{
		temp = -temp;
		print_result += counting_putchar('-', fd);
	}
	if (temp > 9)
	{
		printnbr_fd(temp / 10, fd);
		printnbr_fd(temp % 10, fd);
	}
	else
		print_result += counting_putchar(temp + '0', fd);
	return (print_result);
}

static int	check_format(va_list args, const char *str)
{	
	int	print_result;

	print_result = 0;
	if (str == 'c')
		print_result += counting_putchar(va_arg(args, int), 1);
	else if (str == 's')
		print_result += printstr_fd(va_arg(args, char *), 1);
	else if (str == 'p')
		print_result += ???????(va_arg(args, unsigned long long));
	else if (str == 'd' || str == 'i')
		print_result += printnbr_fd(va_arg(args, int), 1);
	else if (str == 'u')
		print_result += ???????(va_arg(args, unsigned int));
	else if (str == 'x' || str == 'X')
		print_result += ft_print_hex_fd(va_arg(args, unsigned int), 1);
	else if (str == '%')
		print_result += write(1,str,1);????
	return(print_result);
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int	print_result;
	int	i;

	print_result = 0;
	i = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{	
			print_result += check_format(args,str[i+1]);
			i++;
		}
		else
			print_result += write(1,str,1);
		i++;
	}
	return(print_result);
}
