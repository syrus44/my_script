/*
** my_ptsname.c for my_ptsname in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Mon Feb 18 10:05:24 2013 jordan bettin
** Last update Mon Feb 25 14:06:50 2013 jordan bettin
*/

#include "my_script.h"

char	*my_ptsname(int fd)
{
  char	*pty_name;
  int	pty;

  pty_name = xmalloc(sizeof(char) * 256);
  if ((ioctl(fd, TIOCGPTN, &pty)) < 0)
    {
      errno = ENOTTY;
      my_exit_perror("ioctl");
    }
  sprintf(pty_name, "/dev/pts/%u", pty);
  return (pty_name);
}
