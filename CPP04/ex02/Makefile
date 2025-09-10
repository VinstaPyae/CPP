# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 17:26:40 by pzaw              #+#    #+#              #
#    Updated: 2025/09/09 19:22:51 by pzaw             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := Abstract_Animal
CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98
SRCS    := main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
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