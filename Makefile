LIBFT	= -L./libft -lft 

NAME	= libprintf.a

SRCS	= main.c ft_itoab.c ft_printf.c

OBJS	= ${SRCS:.c=.o}

INC	= ft_printf.h

CFLAGS	= -Wall -Wextra -Werror

CC	= gcc

all:		${NAME}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

${NAME}:	${OBJ}
		${CC} ${CFLAGS} -c ${SRCS} -I ${INC} ${LIBFT}

test:		
		${CC} ${CFLAGS} ${SRCS} ${LIBFT} -I ${INC} -o test.out -g -fsanitize=address

clean:		
		rm -rf ${OBJ}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

.PHONY: all clean fclean re test
