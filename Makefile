SRCS	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthexa.c \
	  ft_putui.c ft_upperhexa.c ft_putaddr.c	   \


OBJS	= ${SRCS:.c=.o}


NAME	= libftprintf.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

all:		${NAME}


clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re

