# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 15:45:26 by pzaw              #+#    #+#              #
#    Updated: 2025/09/05 15:45:27 by pzaw             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := Clapda
CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98
SRCS    := main.cpp ClapTrap.cpp
OBJS    := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re