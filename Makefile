##
## Makefile for Makefile in /home/bettin_j//Documents/MyScript
## 
## Made by jordan bettin
## Login   <bettin_j@epitech.net>
## 
## Started on  Fri Feb 15 17:05:45 2013 jordan bettin
## Last update Thu Feb 28 15:54:14 2013 jordan bettin
##

NAME	=	my_script

SRC_DIR	=	./src

SRCS	=	$(SRC_DIR)/main.c			\
		$(SRC_DIR)/check_args.c			\
		$(SRC_DIR)/init_components.c		\
		$(SRC_DIR)/my_fork_pty.c		\
		$(SRC_DIR)/my_login_tty.c		\
		$(SRC_DIR)/my_open_pty.c		\
		$(SRC_DIR)/my_get_termattr.c		\
		$(SRC_DIR)/my_ptsname.c			\
		$(SRC_DIR)/my_unlockpt.c		\
		$(SRC_DIR)/my_grantpt.c			\
		$(SRC_DIR)/my_script.c			\
		$(SRC_DIR)/my_script_append.c		\
		$(SRC_DIR)/my_script_command.c		\
		$(SRC_DIR)/my_script_def.c		\
		$(SRC_DIR)/my_script_def_append.c	\
		$(SRC_DIR)/my_exit_perror.c		\
		$(SRC_DIR)/my_read_tty.c		\
		$(SRC_DIR)/manage_fd.c			\
		$(SRC_DIR)/exec_command.c		\
		$(SRC_DIR)/init_components2.c		\
		$(SRC_DIR)/restore_tty.c		\
		$(SRC_DIR)/xclose.c			\
		$(SRC_DIR)/xmalloc.c			\
		$(SRC_DIR)/xopen.c			\
		$(SRC_DIR)/xselect.c			\
		$(SRC_DIR)/xtcgetattr.c			\
		$(SRC_DIR)/xtcsetattr.c			\
		$(SRC_DIR)/xwrite.c

OBJS	=	$(SRCS:.c=.o)

RM	=	rm -f

CC	=	gcc

CFLAGS	=	-W -Wall -Werror -Iinclude

DUST	=	./*~ ./\#*\#

DUSTI	=	$(INC_DIR)/*~ $(INC_DIR)/\#*\#

DUSTS	=	$(SRC_DIR)/*~ $(SRC_DIR)/\#*\#

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

dust	:
		$(RM) $(DUST)
		$(RM) $(DUSTI)
		$(RM) $(DUSTS)

clean	:	dust
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
