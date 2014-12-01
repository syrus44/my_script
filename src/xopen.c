/*
** xopen.c for xopen in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Feb 16 15:24:01 2013 jordan bettin
** Last update Mon Feb 25 14:07:46 2013 jordan bettin
*/

#include "my_script.h"

int	xopen(const char *pathname, int flags, mode_t mode)
{
  int	fd;

  if ((fd = open(pathname, flags, mode)) == -1)
    {
      errno = EACCES;
      my_exit_perror("open");
    }
  return (fd);
}
