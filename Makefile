# https://epitech-2022-technical-documentation.readthedocs.io/en/latest/makefiles.html
# list the source c files
SRC	=	ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_strlen \
		ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_strlcpy \
		ft_strlcat \
		ft_toupper \
		ft_tolower \
		ft_strchr \
		ft_strrchr \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_strnstr \
		ft_atoi \
		ft_calloc \
		ft_strdup \

# build the objects created
OBJ	= $(SRC:.c=.o)

# -c Compiler source(s) to object-code (input to linker). Better for incremental compilation when using multiple files.
# -I Include Path - Directories containing headers files. 
CFLAGS = -Wall -Werror -Wextra -I. -c 

# set the name of the final binary using NAME, so the AutoGrader can find the binary correctly.
NAME = libft.a

# rule that will execute other rules, and render a binary.
$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)
# a conventional name; all target denotes that if invoked, make will build all to make a complete build. 
all:     	$(NAME)

# clean will remove .o files
clean:
	rm -f $(OBJ)

# fclean will remove .o files and the binary
fclean: clean
	rm -f $(NAME)

# re will do fclean and re-make the binary
re:     	fclean all

#.PHONY, in order to avoid relinking. Put all the used rules.
.PHONY: clean fclean all re
