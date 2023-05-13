NAME = phonebook

SRCS = 	main.cpp	\
		Contact.cpp	\
		PhoneBook.cpp

OBJDIR = build/
SRCDIR = srcs/
HEADER = includes/

OBJS := $(SRCS:.cpp=.o)
SRCS_PREFIXED := $(addprefix $(SRCDIR), $(SRCS))
OBJECTS_PREFIXED := $(addprefix $(OBJDIR), $(OBJS))

CXX	=	c++

CXXFLAGS = -Wall	-Werror	-Wextra -pedantic -g3 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJECTS_PREFIXED) $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(OBJECTS_PREFIXED) -o $(NAME)

$(OBJECTS_PREFIXED): $(OBJDIR)%.o : $(SRCDIR)%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -I$(HEADER) $< -o $@ 

clean:
	/bin/rm -rf $(OBJDIR)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY:	all	clean	fclean	re