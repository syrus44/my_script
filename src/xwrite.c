/*
** xwrite.c for xrite in /home/bettin_j//Documents/MyScript/include
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Feb 16 15:48:45 2013 jordan bettin
** Last update Wed Feb 27 10:36:56 2013 jordan bettin
*/

#include "my_script.h"

int		xwrite(int fd, const void *buff, size_t count)
{
  int		wd;

  if ((wd = write(fd, buff, count)) == -1)
    {
      errno = EIO;
      my_exit_perror("write");
    }
  return (wd);
}
