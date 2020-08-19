NAME = alum1
SRCS = main.c get_map.c game.c players.c output.c
MKOBJ = @gcc -Wall -Wextra -Werror -c
HDRS = -I .
OBJS = main.o get_map.o game.o players.o output.o
MKLIB = @make -C libft/ fclean && make -C libft/ && make -C libft/ clean
MKEXE = @gcc -o
LIBS = -L libft/ -lft

all: $(NAME)
$(NAME):
	$(MKLIB)
	$(MKOBJ) $(SRCS) $(HDRS)
	$(MKEXE) $(NAME) $(OBJS) $(HDRS) $(LIBS)

clean:
	@rm -f $(OBJS)

fclean: cleanlib clean
	@rm -f $(NAME)

cleanlib:
	@make -C libft/ fclean

re: fclean all
