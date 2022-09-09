# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 11:47:19 by jrinna            #+#    #+#              #
#    Updated: 2022/09/09 09:55:04 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ := ${SRC:.cpp=.o}
INC := Zombie.hpp

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := BraiiiiiiinnnzzzZ

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ${INC} Makefile
	${CC} ${CFLAGS} -c $< -o $@ -I

all : ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean