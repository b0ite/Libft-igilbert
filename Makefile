# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: igilbert <igilbert@student.42perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 12:54:31 by igilbert          #+#    #+#              #
#    Updated: 2024/11/06 13:20:14 by igilbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = atoi.c bzero.c calloc.c isalnum.c isalpha.c isascii.c isdigit.c itoa.c \
isprint.c memchr.c memcmp.c memcpy.c memmove.c memset.c putchar_fd.c split.c \
putendl_fd.c putnbr_fd.c putstr_fd.c strchr.c strdup.c strjoin.c strlcat.c \
strlcpy.c strlen.c strmapi.c strncmp.c strnstr.c strrchr.c strtrim.c substr.c \
tolower.c toupper.c
BONUS = lstadd_back.c lstadd_front.c lstclear.c lstdelone.c lstiter.c \
lstlast.c lstmap.c lstnew.c lstsize.c
NAME = libft.a
OBJ = ${SRC:.c=.o}
OBJ_BONUS = ${BONUS:.c=.o}
FLAGS = -Wall -Werror -Wextra

all : $(NAME)
	@true

$(NAME) :
	cc -I $(FLAGS) -c $(FLAGS) $(SRC)
	ar -rcs $(NAME) $(OBJ)

bonus :
	cc -I $(FLAGS) -c $(FLAGS) $(SRC) $(BONUS)
	ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)

clean :
	rm -f $(NAME)

fclean : clean
	rm -rf $(OBJ) $(OBJ_BONUS)

re : fclean all

dev :
	make fclean;git add .; git commit -m 'auto update';git push;cd ../libft-unit-test; make f;cd ../libft; make fclean

.PHONY : all clean fclean re mclean bonus dev
