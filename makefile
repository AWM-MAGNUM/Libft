# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bel-kase <bel-kase@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 23:19:18 by bel-kase          #+#    #+#              #
#    Updated: 2022/11/05 23:02:31 by bel-kase         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc 

CFLAGS = -Wall -Werror -Wextra -c

SRC = ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memcmp.c ft_memcpy.c ft_memset.c ft_putendl_fd.c ft_putstr_fd.c  ft_strchr.c ft_striteri.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_substr.c ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memmove.c ft_putchar_fd.c ft_putnbr_fd.c  ft_split.c ft_strdup.c ft_strjoin.c ft_strlcpy.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_tolower.c 

ARG = -c

OBJS = ${SRC:.c=.o}

RM = rm -rf

${NAME}: ${OBJS}
	ar -rc ${NAME} ${OBJS}
all : ${NAME}

clean : 
			${RM} ${OBJS}
fclean : 	clean 
			${RM} ${NAME} 
re : fclean all
