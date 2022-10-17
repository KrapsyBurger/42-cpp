SRCS = main.cpp\
	   Weapon.cpp\
	   HumanA.cpp\
	   HumanB.cpp

OBJS     = ${SRCS:.cpp=.o}

CXX        = c++

CXXFLAGS    = -Werror -Wall -Wextra -g -std=c++98

RM        = rm -f

NAME = a.out

all: ${NAME}

${NAME}:	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} -rf ${NAME}

re:	fclean all

.PHONY: all clean fclean re
