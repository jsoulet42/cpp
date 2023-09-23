# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsoulet <jsoulet@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 22:09:50 by jsoulet           #+#    #+#              #
#    Updated: 2023/09/23 17:37:12 by jsoulet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC= $(wildcard ./src/*.cpp)
NAME= RPG
OBJ= $(SRC:.cpp=.o)

%.o: %.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	c++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all;

.PHONY: all clean fclean re
