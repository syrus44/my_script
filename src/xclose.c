/*
** xclose.c for xclose in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Feb 16 15:24:10 2013 jordan bettin
** Last update Mon Feb 25 14:07:54 2013 jordan bettin
*/

#include "my_script.h"

int	xclose(int fd)
{
  if (close(fd) == -1)
    {
      errno = EBADF;
      my_exit_perror("close");
    }
  return (0);
}
