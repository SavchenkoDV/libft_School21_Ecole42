SRCS = ft_bzero.c ft_memccpy.c ft_memcpy.c ft_memset.c ft_memmove.c \
       ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
       ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
       ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c


OBJC = ${SRCS:.c=.o}
CC = gcc
GFS = -Wall -Wextra -Werror
NAME = libft.a

.c.o:
		${CC} ${GFS} -c $<

all: $(NAME)

$(NAME): ${OBJC}
		ar rc ${NAME} ${OBJC}
		ranlib ${NAME}

clean:
		-rm -f ${OBJC}

fclean: clean
		-rm -f ${NAME}
re: fclean all

.PHONY: all clean fclean re
