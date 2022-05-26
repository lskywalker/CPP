NAME = Harl

SRC = main.cpp Harl.cpp

FLAG = -Wall -Wextra -Werror

$(NAME): $(SRC)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.c
	clang++ $(FLAGS) -c -o $@ $<

clean:
	rm -f $(NAME) $(OBJ)
