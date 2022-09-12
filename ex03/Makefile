# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 14:16:56 by jrinna            #+#    #+#              #
#    Updated: 2022/09/12 16:39:46 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LST_INC := HumanA.hpp HumanB.hpp Weapon.hpp
LST_SRC := HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
LST_OBJ := $(LST_SRC:.cpp=.o)
LST_DEP := ${LST_SRC:.cpp=.d}

DIR_OBJ := .object
DIR_SRC := source
DIR_INC := include
DIR_DEP := .deps

SRC := ${addprefix ${DIR_SRC}/,${LST_SRC}}
OBJ := ${addprefix ${DIR_OBJ}/,${LST_OBJ}}
INC := ${addprefix ${DIR_INC}/,${LST_INC}}
DEP := ${addprefix ${DIR_DEP}/,${LST_DEP}}

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
DEPFLAGS := -MT $@ -MMD -MP -MF ${DEP}
NAME := human_violence

${NAME} : ${OBJ} ${INC}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME} -I ${DIR_INC}

${DIR_OBJ}/%.o : ${DIR_SRC}/%.cpp ${INC} Makefile | ${DIR_OBJ}
	${CC} ${CFLAGS} -c $< -o $@ -I ${DIR_INC}

${DIR_OBJ} :
	mkdir -p ${DIR_OBJ}

${DIR_DEP} :
	mkdir -p ${DIR_DEP}

all : ${NAME}

clean :
	rm -rf ${DIR_OBJ}
#	rm -rf ${DIR_DEP}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all re clean fclean