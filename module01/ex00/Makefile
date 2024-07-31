NAME=ex01
SRCS=main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
FLAGS=-Wall -Wextra -Werror
CC=c++
OBJ=$(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
