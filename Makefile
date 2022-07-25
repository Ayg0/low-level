CC = cc 

NAME = logiSim

CFLAGS = -Wall -Werror -Wextra -g

byte_add = 8bitadder/adder.c 8bitadder/operation.c

SRCS =  main.c logic_gates.c $(byte_add)

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS) $(B_OBJS)

fclean: clean
		$(RM) $(NAME) $(B_NAME)

re: fclean all

.PHONY: all clean fclean re bonus