CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a


LIB_SRCS = ft_printf.c ft_print_char.c ft_print_str.c ft_print_int.c ft_print_itoa.c ft_print_utoa.c ft_print_unsigned.c \
ft_print_hex.c ft_print_ptr.c

LIB_OBJS = $(LIB_SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(LIB_OBJS) $(LIBFT)
	ar rcs $(NAME) $(LIB_OBJS) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(LIB_OBJS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all