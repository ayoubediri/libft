NAME= libft.a
CC= cc
CFLAGS= -Wall -Wextra -Werror
SRCS= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strchr.c ft_strlcat.c ft_memcmp.c ft_memchr.c ft_memmove.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strlcpy.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c ft_lstiter.c
OBJC= $(SRCS:.c=.o)
BONUS_OBJC= $(BONUS:.c=.o)

all:$(NAME)

$(NAME): $(OBJC)
	@echo -n "\033[0;32m"
	ar rcs $(NAME) $(OBJC)	
	@echo -n "\033[0m"

bonus: $(OBJC) $(BONUS_OBJC)
	@echo -n "\033[0;32m"
	ar rcs $(NAME) $(BONUS_OBJC) $(OBJC)
	@echo -n "\033[0m"

%.o: %.c
	@echo -n "\033[0;32m"
	$(CC) $(CFLAGS) -c $< -o $@
	@echo -n "\033[0m"

clean:
	@echo -n "\033[0;31m"
	rm -f $(OBJC) $(BONUS_OBJC)
	@echo -n "\033[0m"

fclean: clean
	@echo -n "\033[0;31m"
	rm -f $(NAME)
	@echo -n "\033[0m"

re: fclean all

.PHONY: all fclean clean re
