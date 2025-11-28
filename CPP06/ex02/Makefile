# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pzaw <pzaw@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 12:15:11 by pzaw              #+#    #+#              #
#    Updated: 2025/11/28 18:55:34 by pzaw             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := base
CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98
SRCS    := main.cpp Base.cpp A.cpp B.cpp C.cpp
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