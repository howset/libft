# https://epitech-2022-technical-documentation.readthedocs.io/en/latest/makefiles.html

# -------------------------------------------------------------------#
# Variables. list the source c files
SRC	=	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

# -------------------------------------------------------------------#
# Variables. Objects have same name with .c sources but different extension
OBJ	= $(SRC:.c=.o)

# -------------------------------------------------------------------#
# Variables. set the name of the final binary using NAME, so the 
# AutoGrader can find the binary correctly.
NAME = libft.a

# -------------------------------------------------------------------#
# Variables. -I Include Path - Directories containing headers files. 
CFLAGS = -Wall -Werror -Wextra -I.

# -------------------------------------------------------------------#
# Variables. Define CC 
CC = cc

# -------------------------------------------------------------------#
# rule that will execute other rules, and render a binary.
# -c Compiler source(s) to object-code (input to linker). 
# Better for incremental compilation when using multiple files. ?
# cc -c -o $(NAME) $(OBJ)
# ---------
# https://docs.oracle.com/cd/E19504-01/802-5880/make-19/index.html
# The implicit rules provided by default are suffix rules. 
# The rule for building a .o file from a .c file is called the .c.o 
# (pronounced "dot-see-dot-oh") suffix rule.
# ---------
# https://hackernoon.com/how-to-create-a-library-in-c-with-a-makefile
# the “ar” command creates an archive file, which becomes our static library. 
# The r flag to replace/add files to the archive, c to create if it doesn’t 
# exist, s write an index into the archive for faster searches 
# (if the library contains many object files).

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ):	$(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

# ---------
# Alternative. No explicit mention of compiling the sources. Compilation
# proceeds because $(NAME) and ar command requires $(OBJ) which will be 
# compiled automatically
# If using this
#$(NAME):	$(OBJ)
#	ar rcs $(NAME) $(OBJ)

# -------------------------------------------------------------------#
# a conventional name; all target denotes that if invoked, 
# make will build all to make a complete build. 
all:     	$(NAME)

# -------------------------------------------------------------------#
# clean will remove .o files (if called)
clean:
	rm -f $(OBJ)

# -------------------------------------------------------------------#
# fclean will remove .o files and the binary (if called)
fclean: clean
	rm -f $(NAME)

# -------------------------------------------------------------------#
# re will do fclean and re-make the binary (if called)
re:     	fclean all

# -------------------------------------------------------------------#
#.PHONY, in order to avoid relinking. Put all the used rules.
.PHONY: clean fclean all re
