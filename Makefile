NAME = push_swap
FLAGS = -Wall -Wextra -Werror
SRC = main.c ft_sort_and_index.c digits_checker.c \
	linked_list.c finder.c moves_p.c sort_100.c \
	ft_atoi.c moves_r.c sort_2345.c ft_doublecheck.c moves_rr.c \
	ft_indexing.c moves_s.c stock.c sort_5_norm.c sort_4_norm.c some_tools.c
BNS_SRC = bonus.c gnl.c gnl_u.c digits_checker.c \
	linked_list.c finder.c moves_p_b.c  \
	ft_atoi.c moves_r_b.c ft_doublecheck.c moves_rr_b.c \
	moves_s_b.c stock.c some_tools.c\
	ft_strcmp.c ko_ok.c

all : $(NAME)

$(NAME) : $(SRC)
	@gcc $(FLAGS) $(SRC) -o $(NAME)
	@tput setaf 2; echo "PUSH_SWAP IS READY"

bonus : $(BNS_SRC)
	@gcc $(FLAGS) $(BNS_SRC) -o checker
	@tput setaf 2; echo "CHECKER IS READY"


clean:
	@rm -f $(NAME)
	@tput setaf 1; echo "CLEAN COMPLET"
fclean: clean

re: fclean all