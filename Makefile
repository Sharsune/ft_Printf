# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharsune <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:44:31 by sharsune          #+#    #+#              #
#    Updated: 2022/12/12 15:44:33 by sharsune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_print_hex_fd.c ft_print_unsigned_fd.c

OSRC = ${SRC:.c=.o}

WFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	cc -c $(WFLAGS) $(SRC)
	ar rcs $(NAME) $(OSRC)

clean:
	rm -f $(OSRC)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
