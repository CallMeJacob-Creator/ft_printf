CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

LIB_SRCS = ft_printf.c ft_print_char.c ft_print_str.c ft_print_int.c ft_print_unsigned.c \
	ft_print_hex.c ft_print_ptr.c

LIB_OBJS = $(LIB_SRCS:.c=.o)

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIB_OBJS) $(LIBFT)
	$(RM) $(NAME)
	ar x $(LIBFT) --output $(LIBFT_PATH)
	ar rcs $(NAME) $(LIB_OBJS) $(LIBFT_PATH)/*.o
	$(RM) $(LIBFT_PATH)/*.o

$(LIBFT):
	make -C $(LIBFT_PATH) all

clean:
	make -C $(LIBFT_PATH) fclean
	$(RM) $(LIB_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all