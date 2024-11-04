# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igilbert <igilbert@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 22:37:54 by ivan              #+#    #+#              #
#    Updated: 2024/11/04 13:59:07 by igilbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c
NAME = libft.a
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Werror -Wextra

all : $(NAME)
	@true

$(NAME) :
	gcc -I $(FLAGS) -c $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OBJ)

clean :
	rm -f $(NAME)

fclean : clean
	rm -rf $(OBJ)

re : fclean all

dev :
	make fclean;git add .; git commit -m 'auto update';git push;cd ../libft-unit-test; make f;cd ../libft; make fclean

.PHONY : all clean fclean re mclean
