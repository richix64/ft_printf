# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpocater <rpocater@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 11:05:22 by rpocater          #+#    #+#              #
#    Updated: 2023/04/27 13:39:07 by rpocater         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BNS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS	= ${SRCS:.c=.o}
BNS_OBJS	= $(BNS_SRCS:%.c=%.o)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
ifdef FLAG_BONUS
	TOTAL_OBJS = $(OBJS) $(BNS_OBJS)
else
	TOTAL_OBJS = $(OBJS)
endif
HEADER	= libft.h
RM		= @rm -f
%.o:		%.c $(HEADER)
	$(CC) $(CFLAGS) -c -o $@ $<
all: $(NAME)
$(NAME):	$(TOTAL_OBJS)
	ar rcs $(NAME) $(TOTAL_OBJS)
bonus	:	$(BNS_OBJS)
	ar rcs $(NAME) $^
clean:
	$(RM) $(OBJS) $(BNS_OBJS)
fclean:		clean
	$(RM) $(NAME)
re:		fclean all
.PHONY: clean fclean all re
