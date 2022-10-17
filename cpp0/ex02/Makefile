SRCS = Account.cpp\
	   tests.cpp\



 OBJS        = ${SRCS:.cpp=.o}

CC        = clang++

CFLAGS        = -std=c++98 -g3

RM        = rm -f

NAME = a.out

all: ${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} -rf ${NAME}

re:	fclean all

.PHONY: all clean fclean re

################################################# colors

_WHITE = \e[97m
_GREEN = \e[38;5;118m
_ORANGE = \e[38;5;208m
_RED = \e[38;5;196m
_R = \e[0m

#################################################

.PHONY: all clean fclean re