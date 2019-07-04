# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tswart <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/28 08:22:54 by tswart            #+#    #+#              #
#    Updated: 2019/07/03 08:41:10 by tswart           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./libft/*.c

OBJ = *.o

INCL = ./libft/libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	ar rv $(NAME) $(OBJ) $(INCL)
	ranlib $(NAME)
	mv *.o ./libft
	mv $(NAME) ./libft
	gcc main_test_fd.c get_next_line.c ./libft/libft.a

clean:
	rm -f ./libft/*.o

fclean:
	clean
	rm -f libft.a

re:
	fclean all
