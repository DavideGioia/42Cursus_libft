# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 17:44:25 by dgioia            #+#    #+#              #
#    Updated: 2022/09/26 17:23:58 by dgioia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= gcc

CFLAGS= 

NAME= libft.a

SRCDIR = srcs

LIBSRCS = is/ft_isalpha.c \
		  is/ft_isascii.c \
	      is/ft_isdigit.c \
	      is/ft_isprint.c \
		  str/ft_strlcat.c \
	      str/ft_strlcpy.c \
	      str/ft_strlen.c \
	      str/ft_strncmp.c \
		  str/ft_strchr.c \
		  str/ft_strrchr.c \
		  str/ft_striteri.c \
		  str/ft_strmapi.c \
		  str/ft_strtrim.c \
		  str/ft_strjoin.c \
		  str/ft_substr.c \
		  str/ft_strdup.c \
		  str/ft_strnstr.c \
		  str/ft_countchar.c \
		  str/ft_split.c \
		  mem/ft_bzero.c \
		  mem/ft_memset.c \
		  mem/ft_memmove.c \
		  mem/ft_memcpy.c \
		  mem/ft_memchr.c \
		  mem/ft_memcmp.c \
		  mem/ft_calloc.c \
		  to/ft_tolower.c \
		  to/ft_toupper.c \
		  to/ft_atoi.c \
		  to/ft_itoa.c \
		  put/ft_putchar_fd.c \
		  put/ft_putstr_fd.c \
		  put/ft_putnbr_fd.c \
		  put/ft_putendl_fd.c \
		  lst/ft_lstnew.c \
		  lst/ft_lstadd_front.c \
		  lst/ft_lstsize.c \
		  lst/ft_lstlast.c \
		  lst/ft_lstadd_back.c \
		  lst/ft_lstdelone.c \
		  lst/ft_lstclear.c \
		  lst/ft_lstiter.c \
		  lst/ft_lstmap.c \
		   
PRINTFSRCS = ft_printf.c \
			  ft_printhex.c \
			  ft_put_ptr.c \
			  ft_putchar.c \
			  ft_putnbr.c \
			  ft_putstr.c \
			  ft_write.c \
			  ft_putunbr.c \

GNLSRCS = get_next_line.c\

OBJDIR= obj

LIBOBJ= $(addprefix $(OBJDIR)/lib/,$(LIBSRCS:.c=.o))
GNLOBJ= $(addprefix $(OBJDIR)/gnl/,$(GNLSRCS:.c=.o))
PRINTFOBJ= $(addprefix $(OBJDIR)/printf/,$(PRINTFSRCS:.c=.o))

HEADDIR = includes

LIBHEAD = $(HEADDIR)/libft.h
GNLHEAD = $(HEADDIR)/get_next_line.h
PRINTFHEAD = $(HEADDIR)/ft_printf.h

#Print colors/lneclr
BLUE = "\\033[36m"
RED = "\\033[31m"
WHITE = "\\033[0m"
GREEN = "\\033[32m"
YELLOW = "\\033[33m"
PURPLE = "\\033[35m"
LNECLR = "\\33[2K\\r"

all: $(OBJDIR) $(NAME)

$(NAME): $(LIBOBJ) $(GNLOBJ) $(PRINTFOBJ)
	$(AR) rcs $(NAME) $^
	printf "$(LNECLR)$(GREEN)make libft done$(WHITE)\n"

$(OBJDIR):
	mkdir -p $(OBJDIR)/lib/is
	mkdir -p $(OBJDIR)/lib/lst
	mkdir -p $(OBJDIR)/lib/mem
	mkdir -p $(OBJDIR)/lib/put
	mkdir -p $(OBJDIR)/lib/str
	mkdir -p $(OBJDIR)/lib/to
	mkdir -p $(OBJDIR)/gnl
	mkdir -p $(OBJDIR)/printf

$(OBJDIR)/printf/%.o: $(SRCDIR)/printf/%.c $(PRINTFHEAD) $(LIBHEAD)
	$(CC) $(CFLAGS) -I $(HEADDIR) -o $@ -c $<
	printf "$(LNECLR)$(YELLOW)$(NAME): $<$(WHITE)"

$(OBJDIR)/gnl/%.o: $(SRCDIR)/gnl/%.c $(GNLHEAD) $(LIBHEAD)
	$(CC) $(CFLAGS) -I $(HEADDIR) -o $@ -c $<
	printf "$(LNECLR)$(YELLOW)$(NAME): $<"$(WHITE)

$(OBJDIR)/lib/%.o: $(SRCDIR)/lib/%.c $(LIBHEAD)
	$(CC) $(CFLAGS) -I $(HEADDIR) -o $@ -c $<
	printf "$(LNECLR)$(YELLOW)$(NAME): $<"$(WHITE)

clean:
	$(RM) -rf $(OBJDIR)
	printf "$(PURPLE)clean libft done$(WHITE)\n"

fclean:
	$(RM) -rf $(OBJDIR) $(NAME)
	printf "$(RED)fclean libft done$(WHITE)\n"

re:
	$(MAKE) -s fclean
	$(MAKE) -s all
	printf "$(BLUE)re libft done$(WHITE)\n"

.PHONY: clean all fclean re 
.SILENT: clean fclean re $(OBJDIR) $(LIBOBJ) $(PRINTFOBJ) $(GNLOBJ) $(NAME)