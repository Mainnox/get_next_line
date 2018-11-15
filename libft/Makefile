# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akremer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:38:05 by akremer           #+#    #+#              #
#    Updated: 2018/11/13 18:11:15 by akremer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCLUDES = libft.h

SRC1 =	ft_atoi.c	\
		ft_memset.c	\
		ft_bzero.c	\
		ft_strlen.c	\
		ft_memccpy.c\
		ft_strdup.c	\
		ft_memcmp.c	\
		ft_memchr.c	\
		ft_memmove.c\
		ft_memcpy.c	\
		ft_strcpy.c	\
		ft_strncpy.c\
		ft_strcat.c	\
		ft_strchr.c	\
		ft_strrchr.c\
		ft_strstr.c	\
		ft_strnstr.c\
		ft_strcmp.c	\
		ft_strncmp.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strncat.c\
		ft_strlcat.c

SRC2 = 	ft_putchar.c	\
		ft_putstr.c		\
		ft_memalloc.c	\
		ft_memdel.c		\
		ft_strnew.c		\
		ft_strdel.c		\
		ft_strclr.c		\
		ft_striter.c	\
		ft_striteri.c	\
		ft_strmap.c		\
		ft_strmapi.c	\
		ft_strnequ.c	\
		ft_strequ.c		\
		ft_strsub.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_strsplit.c	\
		ft_itoa.c		\
		ft_putendl.c	\
		ft_putnbr.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c

SRCB =	ft_lstnew.c		\
		ft_lstmap.c		\
		ft_lstiter.c	\
		ft_lstadd.c		\
		ft_lstdel.c		\
		ft_lstdelone.c

SRCE =	ft_foreach.c			\
		ft_putchar_puissant.c	\
		ft_strndup.c			\
		ft_sort_integer_table.c	\
		ft_strrev.c

OBJ1 = 	ft_atoi.o		\
		ft_memset.o		\
		ft_bzero.o		\
		ft_memccpy.o	\
		ft_memchr.o 	\
		ft_memcpy.o		\
		ft_strdup.o		\
		ft_memmove.o	\
		ft_memcmp.o		\
		ft_strlen.o		\
		ft_strcpy.o		\
		ft_strncpy.o	\
		ft_strcat.o		\
		ft_strchr.o		\
		ft_strrchr.o	\
		ft_strstr.o		\
		ft_strnstr.o	\
		ft_strcmp.o		\
		ft_strncmp.o	\
		ft_isalpha.o	\
		ft_isdigit.o	\
		ft_isalnum.o	\
		ft_isascii.o	\
		ft_isprint.o	\
		ft_toupper.o	\
		ft_tolower.o	\
		ft_strncat.o	\
		ft_strlcat.o

OBJ2 =	ft_putchar.o	\
		ft_putstr.o		\
		ft_memalloc.o	\
		ft_memdel.o		\
		ft_strnew.o		\
		ft_strdel.o		\
		ft_strclr.o		\
		ft_striter.o	\
		ft_striteri.o	\
		ft_strmap.o		\
		ft_strmapi.o	\
		ft_strnequ.o	\
		ft_strequ.o		\
		ft_strsub.o		\
		ft_strjoin.o	\
		ft_strtrim.o	\
		ft_strsplit.o	\
		ft_itoa.o		\
		ft_putendl.o	\
		ft_putnbr.o		\
		ft_putchar_fd.o	\
		ft_putstr_fd.o	\
		ft_putendl_fd.o	\
		ft_putnbr_fd.o

OBJB =	ft_lstnew.o		\
		ft_lstmap.o		\
		ft_lstiter.o	\
		ft_lstadd.o		\
		ft_lstdel.o		\
		ft_lstdelone.o	

OBJE =	ft_strrev.o				\
		ft_putchar_puissant.o	\
		ft_foreach.o			\
		ft_sort_integer_table.o	\
		ft_strndup.o

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -I $(INCLUDES) -c $(SRC1) $(SRC2) $(SRCB) $(SRCE)
	@ar rc $(NAME) $(OBJ1) $(OBJ2) $(OBJB) $(OBJE)

clean:
	@rm -rf $(OBJ1) $(OBJ2) $(OBJB) $(OBJE)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
