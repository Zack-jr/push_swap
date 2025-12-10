NAME	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LFLAGS	= -g3
RM		= rm -rf

OBJDIR	= obj
SOURCES	= main.c parsing.c
OBJECTS	= $(SOURCES:%.c=$(OBJDIR)/%.o)

RED=\033[0;31m
GREEN=\033[0;32m

all: $(NAME)


$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN) Compiled $<"

$(NAME): $(OBJECTS)
	@cd LIB_FT && make
	@$(CC) $(LFLAGS) $(OBJECTS) LIB_FT/libft.a -o $(NAME)
	@echo "Created $(NAME)"

clean:
	@cd LIB_FT && make clean
	@$(RM) $(OBJDIR)
	@echo "Object files removed"

fclean: clean
	@cd LIB_FT && make fclean
	@$(RM) $(NAME) 
	@echo " "

re: fclean all

.PHONY: all clean fclean re