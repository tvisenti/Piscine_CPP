# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 14:21:49 by tvisenti          #+#    #+#              #
#    Updated: 2017/04/11 16:08:59 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = form

all: $(NAME)

form:
	@$(CC) $(FLAGS) main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp -o $(NAME)
	@echo "\033[1;34mD05\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -rf $(NAME).o
	@echo "\033[1;34mD05\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf a.out
	@echo "\033[1;34mD05\t\033[1;33mCleaning all\t\033[0;32m[OK]\033[0m"

re: fclean all
