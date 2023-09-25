##
## EPITECH PROJECT, 2022
## B-CPE-101-LYN-1-1-myprintf-arthur.maquet
## File description:
## Makefile
##

# Constants
CC	=	gcc
LIB	=	libmy.a
INCLUDE_DIR	=	./include
SRC_DIR		=	./src
SRC_FILES	=	$(filter-out $(SRC_DIR)/main.c, \
				$(shell find $(SRC_DIR) -name "*.c"))
OBJ_FILES	=	$(SRC_FILES:.c=.o)

# Flags
CFLAGS	=	-Wall -Wextra -I$(INCLUDE_DIR) -g3

# Rules
.PHONY: all all-complete clean fclean re

all: $(LIB)

all-complete: all
	$(CC) $(CFLAGS) -o my_printf -L. -lmy $(SRC_DIR)/main.c

$(LIB): $(OBJ_FILES)
	@ar rc $(LIB) $(OBJ_FILES)
	@echo "\033[1;32m[OK]\033[0m" $(LIB)

$(OBJ_FILES): %.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[1;32m[OK]\033[0m" $@

clean:
	@rm -f $(OBJ_FILES)
	@echo "\033[1;31m[OK]\033[0m" $(OBJ_FILES)

fclean: clean
	@rm -f $(LIB) my_printf
	@echo "\033[1;31m[OK]\033[0m" $(LIB)

re: fclean all
