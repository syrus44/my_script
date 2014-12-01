/*
** main.c for main in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Tue Feb 26 11:32:35 2013 jordan bettin
** Last update Thu Feb 28 15:44:29 2013 jordan bettin
*/

#include "my_script.h"

int	main(int ac, char **av)
{
  char	*filename;

  filename = xmalloc(sizeof(char) * 128);
  if (ac == 2)
    {
      strcpy(filename, av[1]);
      my_script(filename);
    }
  else if (ac == 1)
    my_script_def();
  else
    check_args(av);
  return (0);
}
