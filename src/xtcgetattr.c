/*
** xtcgetattr.c for xtcgetattr in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Feb 15 17:37:42 2013 jordan bettin
** Last update Sat Feb 23 15:27:50 2013 jordan bettin
*/

#include "my_script.h"

int	xtcgetattr(int fd, struct termios *termios_p)
{
  if (tcgetattr(fd, termios_p) == -1)
    {
      fprintf(stderr, "Fail to get terminal attributes !\n");
      exit(EXIT_FAILURE);
    }
  return (EXIT_SUCCESS);
}
