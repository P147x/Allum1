/*
** allum1.h for allum1 in /home/lucas/Rendu/CPE_2015_Allum1/includes
** 
** Made by Lucas
** Login   <lucas@epitech.net>
** 
** Started on  Sat Feb 13 15:31:46 2016 Lucas
** Last update Mon Feb 22 00:24:51 2016 Lucas DEBOUTÉ
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_allum
{
  int	board[4];
} t_allum;

void	my_putchar(char c);
void	board_printer(t_allum *allum);
void	ia(t_allum *allum);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_put_nbr(int nbr);
int	board_initialiser(t_allum *allum);
int	check_end_of_game(t_allum *allum);
int	my_getnbr(char *str);
int	my_str_isnum(char *str);
int	check_line_superior_at_one(t_allum *allum);
int	check_particular_condition(t_allum *allum);
int	particular_condition_one(t_allum *allum);
int	particular_condition_two(t_allum *allum);
int	player_turn(t_allum *allum);


#endif /* !ALLUM1_H_ */
