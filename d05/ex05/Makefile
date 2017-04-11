# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 14:21:49 by tvisenti          #+#    #+#              #
#    Updated: 2017/04/11 22:34:28 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = central

all: $(NAME)

central:
	@$(CC) $(FLAGS) main.cpp CentralBureaucracy.cpp Bureaucrat.cpp Form.cpp OfficeBlock.cpp Intern.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp -o $(NAME)
	@echo "\033[1;34mD05\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -rf $(NAME).o
	@echo "\033[1;34mD05\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf a.out
	@rm -rf Target*
	@echo "\033[1;34mD05\t\033[1;33mCleaning all\t\033[0;32m[OK]\033[0m"

re: fclean all
