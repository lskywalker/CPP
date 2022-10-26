NAME = Animal

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ = ${SRC:%.cpp=%.o}

FLAG = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all