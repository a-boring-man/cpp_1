# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/09 13:29:13 by jrinna            #+#    #+#              #
#    Updated: 2022/09/09 13:35:15 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := HI_THIS_IS_BRAIN

LST_SRC := main.cpp
DIR_SRC := source
SRC := ${addprefix $(DIR_SRC)/,${LST_SRC}}

all : ${NAME}

clean :
	rm -rf ${NAME}

re : clean re

.PHONY : all clean re

${NAME} : ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}