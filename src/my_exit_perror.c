/*
** my_exit_perror.c for my_exit_perror in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Feb 23 18:03:35 2013 jordan bettin
** Last update Sat Feb 23 18:03:56 2013 jordan bettin
*/

#include "my_script.h"

void	my_exit_perror(char *error)
{
  perror(error);
  exit(EXIT_FAILURE);
}
