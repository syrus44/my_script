/*
** check_args.c for check_args in /home/bettin_j//Documents/MyScript/src
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Sat Feb 16 15:29:47 2013 jordan bettin
** Last update Thu Feb 28 15:45:36 2013 jordan bettin
*/

#include "my_script.h"

void	check_args(char **av)
{
  int	i;

  i = 1;
  while (av[i] != NULL)
    {
      if (strcmp(av[i], "-a") == 0)
	{
	  if (!(av[i++]))
	    my_script_def_append();
	  else
	    my_script_append(av[i++]);
	  break;
	}
      else if (strcmp(av[i], "-c") == 0)
	my_script_command(av[i++]);
      else
	{
	  printf(USAGE);
	  exit(EXIT_FAILURE);
	}
      i++;
    }
}
