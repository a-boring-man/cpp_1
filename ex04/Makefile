# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrinna <jrinna@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 16:44:52 by jrinna            #+#    #+#              #
#    Updated: 2022/09/13 09:09:26 by jrinna           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC := c++ -std=c++98
CFLAGS := -Wall -Wextra -Werror
NAME := sed_is_for_losers

SRC := main.cpp

all : ${NAME}

${NAME} : ${SRC}
	${CC} ${CFLAGS} ${SRC} -o ${NAME}

clean :
	rm -rf ${NAME}

re : clean all

.PHONY : all re clean