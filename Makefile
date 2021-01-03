LIBFT	= libft

NAME	= libftprintf.a

MAIN	= main.c

SRCS	= ft_format.c ft_get_num_params.c ft_itoab.c ft_print_char.c ft_print_hex.c ft_print_octal.c ft_print_string.c ft_print_with_verify.c ft_printf.c ft_verify_contain.c ft_print_int.c

OBJS	= ${SRCS:.c=.o}

TESTLIB	= -L./libft -lft 

INC	= ftprintf.h

CFLAGS	= -Wall -Wextra -Werror

CC	= gcc

all:		${NAME}
		
${NAME}:	${OBJS}
		make -C ${LIBFT}
		cp ${LIBFT}/libft.a ./${NAME}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

%.o:		%.c ${INC}
		${CC} ${CFLAGS} -c ${SRCS} -I ${INC}
		

test:
		${CC} ${CFLAGS} ${MAIN} ${SRCS} ${TESTLIB} -I ${INC} -o test.out -g -fsanitize=address

clean:		
		rm -rf ${OBJS}

fclean:		clean
		rm -rf ./*.a
		rm -rf ./*.out*

re:		fclean all

.PHONY: all clean fclean re test
