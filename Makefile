##
## Makefile for allum1 in /home/lucas/Rendu/CPE_2015_Allum1
## 
## Made by Lucas
## Login   <lucas@epitech.net>
## 
## Started on  Sat Feb 13 14:52:50 2016 Lucas
## Last update Mon Feb 22 17:28:46 2016 Lucas DEBOUTÉ
##

CC	= gcc

RM	= rm -f

CFLAGS	= -W -Wall -Wextra -ansi -pedantic -g
CFLAGS	+= -I./includes 

LSRCS	= srcs

SRCS	= srcs/allum.c			\
	  srcs/get_next_line.c		\
	  srcs/my_putchar.c		\
	  srcs/my_putstr.c		\
	  srcs/my_getnbr.c		\
	  srcs/player_turn.c		\
	  srcs/board_initialiser.c	\
	  srcs/board_printer.c		\
	  srcs/check_end_of_game.c	\
	  srcs/my_put_nbr.c		\
	  srcs/xor.c			\
	  srcs/checks.c			\
	  srcs/my_str_isnum.c

OBJS	= $(SRCS:.c=.o)

NAME	= allum1

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o allum1

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
