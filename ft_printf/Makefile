# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlum <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 14:29:47 by jlum              #+#    #+#              #
#    Updated: 2023/10/12 13:42:37 by aibn-muh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS =	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c \
	ft_puthex.c ft_putptr.c
OBJS = $(SRCS:.c=.o)
HEADER = ft_printf.h

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@$(CC) $(FLAGS) -c $(SRCS)
	$(AR) $@ $(OBJS)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
