SRC = main_man.c get_next_line.c sorter.c ft_atoi.c get_next_line_utils.c ft_strncmp.c push_sort.c push_swap_function.c push_utils.c rotate_r.c sort_five.c sort_tab.c file_function.c file_push_utils.c
BNS = main_bonus.c get_next_line.c sorter.c ft_atoi.c get_next_line_utils.c push_swap_bonus.c ft_strncmp.c push_sort.c push_swap_function.c push_utils.c rotate_r.c sort_five.c sort_tab.c file_function.c file_push_utils.c
FLAGS = -Wall -Wextra -Werror

CC = cc
NAME = push_swap
NAMB = checker

all : $(NAME)
$(NAME) : $(SRC)		
		$(CC) $(FLAGS) $(SRC) -o $(NAME)
bonus : $(OBJB)
		$(CC) $(FLAGS) $(BNS) -o $(NAMB)
clean :

fclean : clean  
		rm -f $(NAME) $(NAMB)
re	: fclean all
