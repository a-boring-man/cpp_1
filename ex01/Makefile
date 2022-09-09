# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 10:16:14 by jrinna            #+#    #+#              #
#    Updated: 2022/09/09 12:40:21 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LST_SRC := main.cpp Zombie.cpp zombieHorde.cpp
DIR_SRC := source
SRC := ${addprefix ${DIR_SRC}/,${LST_SRC}}

LST_OBJ := ${LST_SRC:.cpp=.o}
DIR_OBJ := object
OBJ := ${addprefix ${DIR_OBJ}/,${LST_OBJ}}

LST_INC := Zombie.hpp
DIR_INC := include
INC := ${addprefix ${DIR_INC}/,${LST_INC}}

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := Moar_brainz

all : ${NAME} clean

clean :
	rm -rf ${DIR_OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

${DIR_OBJ}/%.o : ${DIR_SRC}/%.cpp ${INC} Makefile | ${DIR_OBJ}
	${CC} ${CFLAGS} -c $< -o $@ -I ${DIR_INC}

${DIR_OBJ} :
	mkdir -p ${DIR_OBJ}