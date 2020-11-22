NAME = phonebook
SRC = phonebook.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++03
INCLUDES = -I includes/

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(OBJ) -o $(NAME)

%.o: %.cpp
	@clang++ $(FLAGS) $(INCLUDES) -c $? -o $@

run: $(NAME)
	@./$(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all