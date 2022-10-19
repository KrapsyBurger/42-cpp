SRCS = main.cpp\
	   Bureaucrat.cpp\
	   

OBJS     = ${SRCS:.cpp=.o}
DEPS	 = ${SRCS:.cpp=.d}

CXX        = c++

CXXFLAGS    = -MD -Werror -Wall -Wextra -g -std=c++98

RM        = rm -f

NAME = a.out

all: ${NAME}

${NAME}:	${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}
	${RM} ${DEPS}

fclean:	clean
	${RM} -rf ${NAME}

re:	fclean all

-include $(DEPS)

.PHONY: all clean fclean re