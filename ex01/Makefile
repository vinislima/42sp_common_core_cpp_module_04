# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/28 23:17:46 by vinda-si          #+#    #+#              #
#    Updated: 2025/12/30 22:46:55 by vinda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= shallow
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
SRC			= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJ			= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re