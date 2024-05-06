NAME = libftprintf.a

FUNCTIONS = 

OBJECT = $(FUNCTIONS:%.c=%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):$(OBJECT)
	ar rcs $(NAME) $(OBJECT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re