/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharsune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:44:46 by sharsune          #+#    #+#             */
/*   Updated: 2022/12/12 15:44:48 by sharsune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int ft_printf(const char *str, ...);
int	counting_putchar(int c, int fd);
int	printstr_fd(char *str, int fd);
int	ft_print_hex_fd(unsigned int nb, const char *str, int fd);
int	ft_print_unsigned_fd(unsigned int nb, int fd);
int	ft_print_pointer_fd(unsigned long long nb, int fd);

#endif
