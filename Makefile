NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re