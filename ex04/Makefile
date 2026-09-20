NAME	= sed_is_for_losers

CXX		= c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): main.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME) main.cpp

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
