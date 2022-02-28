NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRC = main.c ft_sort_and_index.c digits_checker.c \
	linked_list.c finder.c moves_p.c sort_100.c \
	ft_atoi.c moves_r.c sort_2345.c ft_doublecheck.c moves_rr.c \
	ft_indexing.c moves_s.c stock.c

all : $(NAME)

$(NAME) : $(SRC)
	@gcc $(FLAGS) $(SRC) -o $(NAME)
	@tput setaf 2; echo "PUSH_SWAP IS READY"

clean:
	@rm -f $(NAME)
	@tput setaf 1; echo "CLEAN COMPLET"
fclean: clean

re: fclean all