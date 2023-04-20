
NAME = so_long

CC = cc -g
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

FUNCTIONS = Mandatory/program/main\
		   Mandatory/functions/ft_checkmap\
		   Mandatory/functions/ft_getmap\
		   Mandatory/functions/ft_get_dimension\
		   Mandatory/functions/ft_cheker\
		   Mandatory/functions/ft_default_stract\
		   Mandatory/functions/ft_printerror\
		   Mandatory/functions/ft_draw\
		   Mandatory/functions/ft_putimg\
		   Mandatory/functions/ft_event\
		   Mandatory/functions/utils/ft_memcmp\
		   Mandatory/functions/utils/ft_memchr\
		   Mandatory/functions/utils/ft_putchr\
		   Mandatory/functions/utils/ft_putstr\
		   Mandatory/functions/utils/ft_split\
		   Mandatory/functions/getnextline/get_next_line\
		   Mandatory/functions/getnextline/get_next_line_utils\

OBJECT = $(FUNCTIONS:=.o)

all :  $(NAME)

debug:
	gcc -g -Wall -Wextra -Lmlx -lmlx -framework OpenGL -framework AppKit Mandatory/program/main.c \
	Mandatory/functions/ft_checkmap.c \
	Mandatory/functions/ft_getmap.c \
	Mandatory/functions/ft_get_dimension.c \
	Mandatory/functions/ft_cheker.c \
	Mandatory/functions/ft_default_stract.c \
	Mandatory/functions/ft_printerror.c \
	Mandatory/functions/ft_draw.c \
	Mandatory/functions/ft_putimg.c \
	Mandatory/functions/ft_event.c \
	Mandatory/functions/utils/ft_memcmp.c \
	Mandatory/functions/utils/ft_memchr.c \
	Mandatory/functions/utils/ft_putchr.c \
	Mandatory/functions/utils/ft_putstr.c \
	Mandatory/functions/utils/ft_split.c \
	Mandatory/functions/getnextline/get_next_line.c \
	Mandatory/functions/getnextline/get_next_line_utils.c -o so_long && make clean


$(NAME) : $(OBJECT)
	$(CC) $(CFLAGS) $(OBJECT) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $@ 

%.o : %.c program/main.h
	$(CC) $(CFLAGS) -c -Imlx -o $@  $<
	
clean :
	$(RM) $(OBJECT)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : fclean clean re all debug