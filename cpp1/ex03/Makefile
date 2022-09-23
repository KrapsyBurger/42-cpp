SRCS = main.cpp\
	   Weapon.cpp\
	   HumanA.cpp\
	   HumanB.cpp

OBJS     = ${SRCS:.c=.o}

CC        = clang++

CFLAGS    = -Werror -Wall -Wextra -std=c++98

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