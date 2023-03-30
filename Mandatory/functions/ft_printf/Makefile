
NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

FILES = ft_printf.c ft_putchr.c ft_putstr.c ft_putnbr.c ft_putnbrb.c ft_putpoint.c

OBJECT = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	$(AR) $@ $(OBJECT)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	$(RM) $(OBJECT)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : fclean clean re all
