# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tavelino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/20 15:31:48 by tavelino          #+#    #+#              #
#    Updated: 2018/06/06 17:46:17 by tavelino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

FLAGS	= -Wall -Werror -Wextra

INCLUDE = ./

SOURCE	= ft_atoi.c \
		ft_strlen_char.c \
		ft_strjoin_free.c \
		ft_lstaddend.c \
		ft_memcpy.c \
		ft_putstr_fd.c \
		ft_strjoin.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_lstdel.c \
		ft_memdel.c \
		ft_strcat.c \
		ft_strlcat.c \
		ft_strrev.c \
		ft_isalnum.c \
		ft_lstdelone.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_strsplit.c \
		ft_isalpha.c \
		ft_lstdup.c \
		ft_memset.c \
		ft_strclr.c \
		ft_strmap.c \
		ft_strstr.c \
		ft_isascii.c \
		ft_lstiter.c \
		ft_putchar.c \
		ft_strcmp.c \
		ft_strmapi.c \
		ft_strsub.c \
		ft_isdigit.c \
		ft_lstmap.c \
		ft_putchar_fd.c \
		ft_strcpy.c \
		ft_strncat.c \
		ft_strtrim.c \
		ft_islower.c \
		ft_lstnew.c \
		ft_putendl.c \
		ft_strdel.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_isprint.c \
		ft_memalloc.c \
		ft_putendl_fd.c \
		ft_strdup.c \
		ft_strncpy.c \
		ft_toupper.c \
		ft_isupper.c \
		ft_memccpy.c \
		ft_putnbr.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_putnbr_fd.c \
		ft_striter.c \
		ft_strnew.c \
		ft_lstadd.c \
		ft_memcmp.c \
		ft_putstr.c \
		ft_striteri.c \
		ft_strnstr.c

OBJ 	= $(SOURCE:.c=.o)

all		: $(NAME)

$(NAME)	: $(SOURCE) libft.h 
		gcc $(FLAGS) -I $(INCLUDE) -c $(SOURCE)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean	:
		/bin/rm -rf $(OBJ) 

fclean	: clean
		/bin/rm -rf $(NAME)

re		: fclean all
