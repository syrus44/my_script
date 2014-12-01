/*
** xmalloc.c for xmalloc in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Feb 16 15:24:27 2013 jordan bettin
** Last update Sat Feb 23 15:27:19 2013 jordan bettin
*/

#include "my_script.h"

void	*xmalloc(size_t nb)
{
  void	*ptr;

  if ((ptr = malloc(nb)) == NULL)
    {
      fprintf(stderr, "Fail to allocate memory space !\n");
      exit(EXIT_FAILURE);
    }
  return (ptr);
}
