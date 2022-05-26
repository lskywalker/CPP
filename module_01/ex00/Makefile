NAME = zombie

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

FLAG = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c
	clang++ $(FLAGS) -c -o $@ $<

clean:
	rm -f $(NAME) $(OBJ)
