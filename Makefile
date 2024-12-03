NAME = libftprintf.a

SRCS = ft_printf.c \ ft_putchar.c \ ft_putstr.c \ print_hexa.c \
	print_integer.c \ print_pointeur.c \ print_unsigned.c \ ft_itoa.c \
	ft_strlen.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re