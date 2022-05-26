NAME = attack

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

FLAG = -Wall -Wextra -Werror

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c
	clang++ $(FLAGS) -c -o $@ $<

clean:
	rm -f $(NAME) $(OBJ)
