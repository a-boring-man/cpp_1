# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 14:16:56 by jrinna            #+#    #+#              #
#    Updated: 2022/09/12 14:36:14 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LST_INC := HumanA.hpp HumanB.hpp Weapon.hpp
LST_SRC := HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
LST_OBJ := $(LST_SRC:.cpp=.o)

DIR_OBJ := object
DIR_SRC := source
DIR_INC := include

SRC := ${addprefix ${DIR_SRC}/,${LST_SRC}}
OBJ := ${addprefix ${DIR_OBJ}/,${LST_OBJ}}
INC := ${addprefix ${DIR_INC}/,${LST_INC}}

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := human_violence

${NAME} : ${OBJ} ${INC}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME} -I ${DIR_INC}

${DIR_OBJ}/%.o : ${DIR_SRC}/%.cpp ${INC} Makefile | ${DIR_OBJ}
	${CC} ${CFLAGS} -c $< -o $@ -I ${DIR_INC}

${DIR_OBJ} :
	mkdir -p ${DIR_OBJ}

all : ${NAME} clean

clean :
	rm -rf ${DIR_OBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean