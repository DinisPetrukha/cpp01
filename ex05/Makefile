NAME = mr_harl
CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Harl.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

1: all
	./$(NAME)
