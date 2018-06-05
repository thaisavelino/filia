# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tavelino <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/05 17:18:27 by tavelino          #+#    #+#              #
#    Updated: 2018/06/05 17:35:45 by tavelino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	gnl
CC		=	gcc
FLAGS	=	-Wall -Werror -Wextra
SRC		=	main.c get_next_line.c
OBJ		=	$(SRC:.c=.o)


all:	$(NAME)

$(NAME):
		make -C libft/ fclean && make -C libft/
		$(CC) $(FLAGS) -I ./libft/libft.h -c $(SRC)
		$(CC) -o $(NAME) $(OBJ) - I libft/ -L libft/ -lft

clean:
		/bin/rm -rf $(OBJ)

fclean: clean
		/bin/rm -rf $(NAME)

re:		fclean all

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

.PHONY: all clean fclean re
