NAME = Span

SRC = main.cpp Span.cpp

OBJ = ${SRC:%.cpp=%.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all