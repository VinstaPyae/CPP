# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 12:14:44 by pzaw              #+#    #+#              #
#    Updated: 2026/01/18 12:41:42 by pzaw             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := MutantStack
CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -I. -std=c++98
SRCS    := main.cpp
OBJS    := $(SRCS:.cpp=.o)
DEPS    := $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
