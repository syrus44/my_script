/*
** my_script.h for my_script in /home/bettin_j//Documents/MyScript/include
** 
** Made by jordan bettin
** Login   <bettin_j@epitech.net>
** 
** Started on  Fri Feb 15 17:10:49 2013 jordan bettin
** Last update Thu Feb 28 15:54:29 2013 jordan bettin
*/

#ifndef MY_SCRIPT_H
#define	MY_SCRIPT_H

/* DEFINES ET INCLUDES */

#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <termios.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <pty.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>

#define	UNUSED	__attribute__((unused))
#define	USAGE	"./my_script [-a FILE] [-c COMMAND] [-f] [-q] [-t]\n"
#define	EXISTS(f) f ? f : "typescript"

/* PROTOYPES DE FONCTIONS */

int	main(int ac, char **av);
void	check_args(char **av);
int	my_script_append(char *filename);
int	my_script(char *filename);
int	my_script_def();
int	my_script_def_append();
int	my_script_command(char *command);
int	init_components(int fd_file);
int	init_components2(int fd_file, char *command);
void	my_exit_perror(char *name);
void	my_get_termattr(struct termios *t);
pid_t	my_fork_pty(int *fd_amaster, int *fd_aslave, char *tty_name);
int	exec_command(char *command);
int	my_open_pty(int *fd_amaster, int *fd_aslave, char *name);
int	my_login_tty(int *fd_aslave);
int	my_grantpt(char *pty_name);
int	my_unlockpt(int fd_amaster);
char	*my_ptsname(int fd);
int	my_read_tty(int *fd_amaster, int *fd_file, pid_t pid);
int	manage_fd(int *fd_amaster, char *buff, int *rd, fd_set *fds);
void	restore_tty();
int	xclose(int fd);
int	xexeclp(const char *file, const char *arg, ...);
void	*xmalloc(size_t nb);
int	xopen(const char *pathname, int flags, mode_t mode);
int	xselect(int nfds, fd_set *readfds, fd_set *writefds,
		fd_set *exceptfds, struct timeval *timeout);
int	xtcgetattr(int fd, struct termios *termios_p);
int	xtcsetattr(int fd, int optional_actions,
		   const struct termios *termios_p);
int	xwrite(int fd, const void *buff, size_t count);
pid_t	xsetsid(void);

#endif
