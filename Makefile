# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: czalewsk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 15:04:49 by czalewsk          #+#    #+#              #
#    Updated: 2016/11/10 15:48:59 by czalewsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJ = ft_strlen.o	\
	  ft_strdup.o	\
	  ft_strcpy.o	\
	  ft_strncpy.o	\
	  ft_strcat.o	\
	  ft_strncat.o	\
	  ft_strlcat.o	\
	  ft_strrchr.o	\
	  ft_strstr.o	\
	  ft_strcmp.o	\
	  ft_strncmp.o	\
	  ft_atoi.o		\
	  ft_isdigit.o	\
	  ft_isalnum.o	\
	  ft_isascii.o	\
	  ft_isprint.o	\
	  ft_toupper.o	\
	  ft_tolower.o	\
	  ft_strchr.o	\
	  ft_strnstr.o	\
	  ft_isalpha.o	\
	  ft_memset.o	\
	  ft_bzero.o	\
	  ft_memcpy.o	\
	  ft_memccpy.o	\
	  ft_memmove.o	\
	  ft_memchr.o	\
	  ft_memcmp.o	\
	  ft_memalloc.o \
	  ft_memdel.o	\
	  ft_strnew.o	\
	  ft_strdel.o	\
	  ft_strclr.o	\
	  ft_striter.o	\
	  ft_striteri.o	\
	  ft_strmap.o	\
	  ft_strmapi.o	\
	  ft_strequ.o	\
	  ft_strnequ.o	\
	  ft_strsub.o	\
	  ft_strjoin.o	\
	  ft_strtrim.o	\
	  ft_strsplit.o

all : $(NAME)

$(NAME) : $(OBJ) 
	ar rc $(NAME) $(OBJ) && ranlib libft.a

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
