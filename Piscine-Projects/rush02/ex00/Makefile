SRC = rush-02.c print.c dictionary.c dict_utils.c dict_parse.c common.c arguments.c senceless.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = rush-02

$(NAME): $(OBJ)
		 cc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
