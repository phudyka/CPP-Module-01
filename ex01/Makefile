# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phudyka <phudyka@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/23 11:49:28 by phudyka           #+#    #+#              #
#    Updated: 2023/11/03 15:33:52 by phudyka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz!

SRCS = main.cpp Zombie.cpp newZombie.cpp zombieHorde.cpp 

OBJS = $(SRCS:.cpp=.o)

CXX = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re