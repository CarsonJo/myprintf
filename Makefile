SRC = ft_printf.c handle_variable.c convert_char.c convert_hex_unsigned.c convert_int.c \
	convert_maj_hex_unsigned.c convert_string.c convert_unsigned.c convert_adress.c

OBJ = $(SRC:.c=.o)

LIBSRC = libft/ft_putchar_fd.c libft/ft_itoa.c

LIBOBJ = ft_putchar_fd.o ft_itoa.o

LIB = libft.a

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all : $(NAME) $(LIB)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

$(OBJ) : $(SRC)
	gcc -c $(SRC) $(CFLAGS)

$(LIB) : $(LIBOBJ)
	ar -rc $(LIB) $(LIBOBJ)

$(LIBOBJ) : $(LIBSRC)
	gcc -c $(LIBSRC) $(CFLAGS)

clean :
	rm -f $(LIBOBJ) $(OBJ)

fclean : clean
	rm -f $(NAME) $(LIB)

re : fclean all

.PHONY : all clean fclean re
