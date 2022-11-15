NAME = Intern

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
		PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

OBJ = ${SRC:%.cpp=%.o}

FLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRC)
	c++ $(FLAGS) $(SRC) -o $(NAME)

%.o: %.cpp
	c++ $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME) Shrubbery_shrubbery

re: fclean all