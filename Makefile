# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-azra <ael-azra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 15:16:43 by ael-azra          #+#    #+#              #
#    Updated: 2021/10/26 11:36:42 by ael-azra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

FILE =	./file/main.c \
		./src/gnl/gnl.c \
		./src/libft/libft.a \
		./file/check_map.c \
		

Flag = -Wall -Wextra -Werror

MLX = -lmlx -framework OpenGl -framework AppKit

all: $(NAME)

$(NAME) :
	@make -C ./src/libft/ re
	@gcc $(FLAG) -I /usr/local/include $(FILE) \
	-L /usr/local/include $(MLX) -o $(NAME)

clean:
	@rm -f *.o ./src/libftt/*.o

fclean:
	@rm -f $(NAME)

re: fclean all
