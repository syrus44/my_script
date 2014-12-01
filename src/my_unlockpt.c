/*
** my_unlockpt.c for my_unlockpt in /home/bettin_j//Documents/MyScript
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 17:38:06 2013 jordan bettin
** Last update Mon Feb 25 14:06:16 2013 jordan bettin
*/

#include "my_script.h"

int	my_unlockpt(int fd_amaster)
{
  int	unlock;

  unlock = 0;
  if (ioctl(fd_amaster, TIOCSPTLCK, &unlock))
    {
      errno = EBADF;
      my_exit_perror("unlockpt");
    }
  return (0);
}
