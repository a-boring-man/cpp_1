# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 10:40:03 by jrinna            #+#    #+#              #
#    Updated: 2022/09/14 13:19:43 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp Harl.cpp
INC := Harl.hpp
OBJ := ${SRC:.cpp=.o}

NAME := harlFilter
CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror

all : ${NAME} clean

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o : %.cpp ${INC} Makefile
	${CC} ${CFLAGS} -c $< -o $@

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean