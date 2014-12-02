#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/10 10:41:23 by sdurr             #+#    #+#              #
#    Updated: 2014/11/24 11:51:48 by sdurr            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = 		libft.a

HPATH = -I

CPATH = ./srcs/

SRCS = ft_atoi.c\
       	 	ft_bzero.c\
        	ft_isalnum.c\
        	ft_isalpha.c\
        	ft_isascii.c\
        	ft_isdigit.c\
        	ft_isprint.c\
        	ft_memalloc.c\
        	ft_memccpy.c\
        	ft_memchr.c\
        	ft_memcmp.c\
        	ft_memcpy.c\
        	ft_memdel.c\
        	ft_memmove.c\
        	ft_memset.c\
        	ft_putchar.c\
        	ft_putchar_fd.c\
        	ft_putendl.c\
        	ft_putendl_fd.c\
       		ft_putnbr.c\
       		ft_putnbr_fd.c\
        	ft_putstr.c\
        	ft_putstr_fd.c\
        	ft_strcat.c\
        	ft_strchr.c\
        	ft_strclr.c\
        	ft_strcmp.c\
        	ft_strcpy.c\
        	ft_strdel.c\
        	ft_strdel.c\
        	ft_strdup.c\
        	ft_strequ.c\
        	ft_striter.c\
        	ft_striteri.c\
        	ft_strjoin.c\
        	ft_strlen.c\
        	ft_strlcat.c\
			ft_strncat.c\
        	ft_strncmp.c\
        	ft_strncpy.c\
        	ft_strnequ.c\
       		ft_strnew.c\
			ft_strnstr.c\
        	ft_strrchr.c\
        	ft_strstr.c\
        	ft_strsub.c\
        	ft_strtrim.c\
        	ft_tolower.c\
        	ft_toupper.c\
			ft_strmap.c\
			ft_strmapi.c\
			ft_strsplit.c\
			ft_copy_tmp.c\
			ft_count_char.c\
			ft_word_long.c\
			ft_itoa.c\
			ft_long_int.c\
			ft_revers.c\
			ft_split_s.c\
			ft_last_line.c\

OBJS 	= 	$(SRCS:.c=.o)

FLAGS 	= 	-Wall -Wextra -Werror

RM 		= 	rm -rf

CC 		= 	gcc

all : $(NAME)

$(NAME) : $(OBJS)
				@ar rc $(NAME) $(OBJS)
				@ranlib $(NAME)

%.o :		$(CPATH)%.c
				@$(CC) $(HPATH) -o $@ -c $< $(FLAGS)

clean :
				@$(RM) $(OBJS)

fclean :	clean
				@$(RM) $(NAME)

re:			fclean all