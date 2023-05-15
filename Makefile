SRC = ft_printf.c handle_variable.c convert_char.c convert_hex_unsigned.c convert_int.c \
	convert_maj_hex_unsigned.c convert_string.c convert_unsigned.c convert_adress.c \
	ft_itoa.c ft_putchar_fd.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	gcc -c $(SRC) $(CFLAGS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
