/*
** my_grantpt.c for my_grantpt in /home/bettin_j//Documents/MyScript
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 17:42:04 2013 jordan bettin
** Last update Mon Feb 25 14:06:40 2013 jordan bettin
*/

#include "my_script.h"

int	my_grantpt(char *pty_name)
{
  int	stat;
  int	stat2;

  stat = chown(pty_name, getuid(), getgid());
  if (stat == -1)
    {
      errno = EACCES;
      my_exit_perror("chown");
    }
  stat2 = chmod(pty_name, 0620);
  if (stat2 == -1)
    {
      errno = EACCES;
      my_exit_perror("chmod");
    }
  return (0);
}

