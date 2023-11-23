CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap

SRC_PATH = src/
OBJ_PATH = obj/

SRC 	= main.c \
		algorithme.c \
		errors.c \
		errors_utils.c \
		utils.c \
		push.c \
		swap.c \
		rotate.c \
		reverse_rotate.c\
		stack.c \
		initialization.c \
		anne_trialgo.c \
		pentalgo.c
SRCS = $(addprefix $(SRC_PATH), $(SRC))
OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))
INCS = -I ./includes/

all : $(OBJ_PATH) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)
$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re