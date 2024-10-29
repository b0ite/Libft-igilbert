# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 22:37:54 by ivan              #+#    #+#              #
#    Updated: 2024/10/22 22:37:55 by ivan             ###   ########.fr        #
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

.PHONY : all clean fclean re mclean
