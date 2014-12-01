/*
** my_login_tty.c for my_login_tty in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 10:13:15 2013 jordan bettin
** Last update Thu Feb 28 15:47:27 2013 jordan bettin
*/

#include "my_script.h"

int	my_login_tty(int *fd_aslave)
{
  int	stat;

  if (setsid() == -1)
    {
      errno = EPERM;
      my_exit_perror("setsid");
    }
  if ((ioctl(*fd_aslave, TIOCSCTTY, NULL)) == -1)
    {
      errno = EBADF;
      my_exit_perror("ioctl");
    }
  if ((stat = dup2(*fd_aslave, 0)) == -1)
    return (-1);
  if ((stat = dup2(*fd_aslave, 1)) == -1)
    return (-1);
  if ((stat = dup2(*fd_aslave, 2)) == -1)
    return (-1);
  return (0);
}
