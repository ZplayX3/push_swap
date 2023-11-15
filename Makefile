CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

OBJECTS = $(SRCS:.c=.o)

ll : $(NAME) $(OBJECTS)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

clean :
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all