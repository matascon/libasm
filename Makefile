NAME	=	libasm.a
SRCS	=	ft_strlen.s		\
			ft_strcpy.s		\
			ft_strcmp.s		\
			ft_write.s		\
			ft_read.s		\
			ft_strdup.s		\
			ft_atoi_base.s
OBJS	=	$(SRCS:.s=.o)
AR		=	ar rcs
RANLIB	=	ranlib

.s.o:
			@nasm -f macho64 $< -o $(<:.s=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			$(RANLIB) $(NAME)

clean:
			@rm -f $(OBJS)

fclean:		clean
			@rm -f $(NAME)
			@rm -f main.o
			@rm -f test

re:			fclean all

test:		$(NAME)
			@gcc -c main.c
			@gcc -o test main.o $(NAME)
			@./test

.PHONY:		all clean fclean re test
