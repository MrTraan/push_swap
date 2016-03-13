NAME =	push_swap

SRC =	main.c	stack_utils.c ope_one.c stack_info.c

OBJ = $(SRC:.c=.o)

INCLUDES = -I./libft/includes -I./ft_readline/includes -I./includes

CFLAGS = -Wall -Wextra -Werror

LIBS = -L./libft -lft

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	gcc $(CFLAGS) $(LIBS) $^ -o $(NAME)

%.o: srcs/%.c
	gcc $(CFLAGS) $(INCLUDES) -c $^

clean:
	make clean -C libft/
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft/
	rm -f $(NAME)

re: fclean all
