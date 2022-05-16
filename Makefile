# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 16:37:24 by mbenaoui          #+#    #+#              #
#    Updated: 2021/12/02 17:15:51 by mbenaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
OBJ_FILE = $(SRC_FILE:%.c=%.o)
CFLAGS = -Wall -Werror -Wextra
SRC_FILE = ft_hexadecimal.c ft_hexadx.c ft_p.c ft_printf.c ft_pustr.c ft_putchar.c ft_putnbr.c ft_unsigned_nbr.c 

all : $(NAME)

$(NAME) : $(OBJ_FILE) ft_printf.h
	ar rc $(NAME) $(OBJ_FILE)
%.o: %.c  
	cc $(CFLAGS) -o $@ -c $<
	
clean :
	rm -f $(OBJ_FILE)

fclean :    clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re bonus
# rrr
