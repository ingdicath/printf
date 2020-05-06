# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dsalaman <dsalaman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/03/02 19:29:53 by dsalaman      #+#    #+#                  #
#    Updated: 2020/04/07 19:08:30 by dsalaman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_find_format.c ft_extract_format_number.c\
	  ft_extract_format_text.c ft_print_format.c ft_apply_format.c\
	  ft_printf_utils.c ft_printf_utils_mapper.c

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "libftprintf compiled"

$(OBJECTS): $(SRC)
	@cc -c $(FLAGS) $(SRC)

clean:
	@rm -f $(OBJECTS)
	@echo "Objects files were removed."

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
