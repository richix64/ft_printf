# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 13:04:53 by rpocater          #+#    #+#              #
#    Updated: 2023/07/08 13:59:09 by rpocater         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= ft_printf.c ft_argument_percent.c ft_argument_c.c ft_argument_s.c ft_argument_p.c ft_arguments_d_i.c ft_decimal_length.c ft_hex_length.c ft_decimal_converter_to_hex.c ft_print_reversed_str.c ft_free_ptr.c ft_argument_u.c ft_arguments_x.c
LIBFT	= ./libft/libft.a
OBJS	= ${SRCS:.c=.o}
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
HEADER	= ft_printf.h
RM	= rm -f
%.o:		%.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<
all:	$(NAME)
$(NAME):	$(OBJS) ${LIBFT}
	ar rcs $(NAME) $(OBJS)
${LIBFT}:
	make all bonus -C libft
	cp ${LIBFT} ${NAME}
clean:
	$(RM) $(OBJS)
fclean:	clean
	$(RM) $(NAME)
	make fclean -C libft
#test:	libftprintf.a	main.c	${LIBFT}
	#$(CC) $(CFLAGS) libftprintf.a main.c
re:		fclean all
.PHONY: clean fclean all re
