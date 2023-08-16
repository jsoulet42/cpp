# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 06:50:48 by jsoulet           #+#    #+#              #
#    Updated: 2023/08/15 08:08:07 by jsoulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Zombie
SRC= main.cpp zombie.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	g++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
