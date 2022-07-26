CC = cc 

NAME = logilow

CFLAGS = -Wall -Werror -Wextra -g

byte_add = 8bitadder/adder.c 8bitadder/operation.c

byte_shift = 8bitshifter/8shift.c

byte_comp = 8comparator/equality.c

byte_subs = 8bitsubs/8subs.c

SRCS =  main.c logic_gates.c $(byte_add) $(byte_comp) $(byte_shift) $(byte_subs)

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