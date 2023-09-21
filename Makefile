# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-muh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:43:11 by aibn-muh          #+#    #+#              #
#    Updated: 2023/09/21 15:59:25 by aibn-muh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c \
					ft_strlcat.c ft_strncmp.c ft_isalpha.c \
					ft_memcpy.c  ft_strchr.c  ft_strlcpy.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_isdigit.c  ft_memset.c \
					ft_atoi.c ft_calloc.c ft_strdup.c ft_memchr.c \
					ft_memcmp.c ft_strnstr.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c	
OBJS			= $(SRCS:.c=.o)
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		
			$(CC) $(CFLAGS) -c $(SRCS) -I./
			ar -rc $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
