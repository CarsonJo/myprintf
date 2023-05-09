SRC = ft_printf.c handle_variable.c convert/convert_adress.c convert/convert_char.c
		convert/convert_hex_unsigned.c convert\convert_int.c convert\convert_maj_hex_unsigned.c
		convert/convert_string.c convert/convert_unsigned.c

OBJ = $(SRC:.c=.o)

LIBSRC = libft/ft_putchar_fd.c libft/ft_itoa.c

LIBOBJ = $(LIBSRC:.c=.o)

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

