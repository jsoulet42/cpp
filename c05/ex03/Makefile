CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Bureaucrat

SRC =$(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I./ $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -I./ -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
