NAME = libasm.a

MANDATORY = ft_read.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlen.o ft_write.o

COMP = nasm -f macho64

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(MANDATORY)
	@ar rcs $(NAME) $(MANDATORY)

ft_read.o: ft_read.s
	$(COMP) ft_read.s

ft_strcmp.o: ft_strcmp.s
	$(COMP) ft_strcmp.s

ft_strcpy.o: ft_strcpy.s
	$(COMP) ft_strcpy.s

ft_strdup.o: ft_strdup.s
	$(COMP) ft_strdup.s

ft_strlen.o: ft_strlen.s
	$(COMP) ft_strlen.s

ft_write.o: ft_write.s
	$(COMP) ft_write.s

clean:
	rm -f $(MANDATORY)

fclean: clean
	rm -f $(NAME) test aim.txt

test: libasm.a
	gcc -Wall -Wextra -Werror main.c -I. libasm.a -o test

.PHONY: re
re: clean all