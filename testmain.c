/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharsune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:51:14 by sharsune          #+#    #+#             */
/*   Updated: 2022/12/12 16:51:16 by sharsune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*str = "World";
	char	*null = NULL;

	printf("%i\n", printf("char:|%c| string:|%s| address:|%p| decimal:|%d| integer:|%i| unsigned integer:|%u| hexa:|%x| HEXA:|%X| percent sign:|%%| nullpointer:|%s|\n", 'r', "Hello", str, 12, -5, -239422, -1, -1, null));
	ft_printf("%i\n", ft_printf("char:|%c| string:|%s| address:|%p| decimal:|%d| integer:|%i| unsigned integer:|%u| hexa:|%x| HEXA:|%X| percent sign:|%%| nullpointer:|%s|\n", 'r', "Hello", str, 12, -5, -239422, -1, -1, null));
	return (0);
}