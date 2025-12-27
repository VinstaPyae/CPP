# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jace <jace@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 12:14:44 by pzaw              #+#    #+#              #
#    Updated: 2025/12/28 02:03:09 by jace             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := span
CXX     := c++
CXXFLAGS:= -Wall -Wextra -Werror -I. -std=c++98 -MMD -MP
SRCS    := main.cpp Span.cpp
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
