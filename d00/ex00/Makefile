# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 14:13:44 by tvisenti          #+#    #+#              #
#    Updated: 2017/03/29 14:18:50 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = megaphone

all: $(NAME)

megaphone:
	@$(CC) $(FLAGS) megaphone.cpp -o megaphone
	@echo "\033[1;34mD00\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -rf megaphone.o
	@echo "\033[1;34mD00\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf megaphone
	@rm -rf a.out
	@echo "\033[1;34mD00\t\033[1;33mCleaning all\t\033[0;32m[OK]\033[0m"

re: fclean all
