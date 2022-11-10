SRC	= test.c test_argc.c test_argv.c check_argc.c unity.c check_numeric_value.c
SRC += test_integrado_argumentos.c

NAME	= cavalinho

all:
	make -C ./libft/
	cc $(SRC) ./libft/libft.a -o $(NAME)
	./$(NAME)

ma:
	valgrind ./$(NAME)