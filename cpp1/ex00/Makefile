SRCS = main.cpp\
	   newZombie.cpp\
	   randomChump.cpp\
	   Zombie.cpp

OBJS     = ${SRCS:.cpp=.o}

CXX        = c++

CXXFLAGS    = -Werror -Wall -Wextra -std=c++98

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