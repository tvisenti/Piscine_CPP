# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/29 14:21:49 by tvisenti          #+#    #+#              #
#    Updated: 2017/04/07 19:57:18 by tvisenti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = wasteland

all: $(NAME)

wasteland:
	@$(CC) $(FLAGS) main.cpp  AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp -o $(NAME)
	@echo "\033[1;34mD04\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@rm -rf $(NAME).o
	@echo "\033[1;34mD04\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf a.out
	@echo "\033[1;34mD04\t\033[1;33mCleaning all\t\033[0;32m[OK]\033[0m"

re: fclean all
