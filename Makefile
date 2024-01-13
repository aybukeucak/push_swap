NAME			=	push_swap
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
RM				=	rm -rf

SRC				=	main.c \
					check.c \
					error.c \
					find.c \
					op_push.c \
					op_r_rotate.c \
					op_rotate.c \
					op_swap.c \
					print.c \
					set.c \
					sort_many.c \
					sort_seperate.c \
					sort_small.c \
					sort.c \
					utils.c \

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(SRC)
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
