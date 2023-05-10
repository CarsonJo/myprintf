SRC = ft_printf.c handle_variable.c convert_char.c convert_hex_unsigned.c convert_int.c \
	convert_maj_hex_unsigned.c convert_string.c convert_unsigned.c convert_adress.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

LIB = libft.a

PRINT = print.a

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(PRINT) $(LIB)
	ar -rcT $(NAME) $(PRINT) libft/$(LIB)

$(PRINT) : $(OBJ)
	ar -rc $(PRINT) $(OBJ)

$(OBJ) : $(SRC)
	gcc -c $(SRC) $(CFLAGS)

$(LIB) :
	make -C libft

clean :
	rm -f $(LIBOBJ) $(OBJ)
	make -C libft clean

fclean : clean
	rm -f $(NAME) $(PRINT)
	make -C libft fclean

re : fclean all

.PHONY : all clean fclean re
