# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 12:01:11 by ahsalam           #+#    #+#              #
#    Updated: 2023/06/03 09:17:36 by ahsalam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= 	ft_printf.c \
				ft_print_pointer.c \
				ft_print_unsigned.c \
				ft_print_string.c \
				ft_print_int.c \
				ft_print_char.c \
				ft_print_hex.c \
				ft_creating_string.c

OBJ			=	$(SRC:.c=.o)

NAME		=	libftprintf.a
LIBFTNAME	=	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -Iincludes
LIBFTDIR 	= ./libft


all: 		$(NAME)

makelibft:
	make -C $(LIBFTDIR)
	cp $(LIBFTDIR)/$(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	cd $(LIBFTDIR) && make clean

fclean:		clean
	rm -f $(NAME)
	cd $(LIBFTDIR) && make fclean

re:		fclean $(NAME)

.PHONY:	all clean fclean re
