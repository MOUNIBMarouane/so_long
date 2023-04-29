
NAME = so_long

CC = cc -g
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

FUNCTIONS = Mandatory/program/main.c \
	Mandatory/functions/ft_checkmap.c \
	Mandatory/functions/ft_getmap.c \
	Mandatory/functions/ft_get_dimension.c \
	Mandatory/functions/ft_cheker.c \
	Mandatory/functions/ft_check_path.c \
	Mandatory/functions/ft_default_stract.c \
	Mandatory/functions/ft_printerror.c \
	Mandatory/functions/ft_draw.c \
	Mandatory/functions/ft_putimg.c \
	Mandatory/functions/ft_event.c \
	Mandatory/functions/ft_inti_win.c \
	Mandatory/functions/events/ft_endgame.c \
	Mandatory/functions/events/ft_moveup.c \
	Mandatory/functions/events/ft_movedown.c \
	Mandatory/functions/events/ft_moveleft.c \
	Mandatory/functions/events/ft_moveright.c \
	Mandatory/functions/events/ft_coin_handel.c \
	Mandatory/functions/utils/ft_memcmp.c \
	Mandatory/functions/utils/ft_memchr.c \
	Mandatory/functions/utils/ft_putchr.c \
	Mandatory/functions/utils/ft_putstr.c \
	Mandatory/functions/utils/ft_split.c \
	Mandatory/functions/utils/ft_strdup.c \
	Mandatory/functions/utils/ft_strlcpy.c \
	Mandatory/functions/utils/ft_putnbr_fd.c \
	Mandatory/functions/utils/ft_putstr_fd.c \
	Mandatory/functions/utils/ft_putchar_fd.c \
	Mandatory/functions/getnextline/get_next_line.c \
	Mandatory/functions/getnextline/get_next_line_utils.c \

OBJECT = $(FUNCTIONS:.c=.o)

all :  $(NAME)

debug:
	gcc -g -Wall -Wextra -Lmlx -lmlx -framework OpenGL -framework AppKit \
	Mandatory/program/main.c \
	Mandatory/functions/ft_checkmap.c \
	Mandatory/functions/ft_getmap.c \
	Mandatory/functions/ft_get_dimension.c \
	Mandatory/functions/ft_cheker.c \
	Mandatory/functions/ft_check_path.c \
	Mandatory/functions/ft_default_stract.c \
	Mandatory/functions/ft_printerror.c \
	Mandatory/functions/ft_draw.c \
	Mandatory/functions/ft_putimg.c \
	Mandatory/functions/ft_event.c \
	Mandatory/functions/ft_inti_win.c \
	Mandatory/functions/events/ft_endgame.c \
	Mandatory/functions/events/ft_moveup.c \
	Mandatory/functions/events/ft_movedown.c \
	Mandatory/functions/events/ft_moveleft.c \
	Mandatory/functions/events/ft_moveright.c \
	Mandatory/functions/events/ft_coin_handel.c \
	Mandatory/functions/utils/ft_memcmp.c \
	Mandatory/functions/utils/ft_memchr.c \
	Mandatory/functions/utils/ft_putchr.c \
	Mandatory/functions/utils/ft_putstr.c \
	Mandatory/functions/utils/ft_split.c \
	Mandatory/functions/utils/ft_strdup.c \
	Mandatory/functions/utils/ft_strlcpy.c \
	Mandatory/functions/utils/ft_putnbr_fd.c \
	Mandatory/functions/utils/ft_putstr_fd.c \
	Mandatory/functions/utils/ft_putchar_fd.c \
	Mandatory/functions/getnextline/get_next_line.c \
	Mandatory/functions/getnextline/get_next_line_utils.c \
	-o so_long && make clean


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