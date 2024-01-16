# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dong-kim <dong-kim@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/19 03:25:07 by dong-kim          #+#    #+#              #
#    Updated: 2023/03/22 04:05:34 by dong-kim         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME	 = libft.a
CC		 = cc
CFLAG	 = -Wall -Wextra -Werror
RM		 = rm -f
AR		 = ar
ARFLAGS  = rcvs
SRCS_1	 = ./ft_strlen.c		        \
		   ./ft_strlcpy.c		        \
		   ./ft_strlcat.c		        \
		   ./ft_strchr.c		        \
		   ./ft_strnstr.c		        \
		   ./ft_strncmp.c		        \
		   ./ft_strdup.c		        \
		   ./ft_strrchr.c		        \
		   ./ft_memset.c		        \
		   ./ft_memcpy.c		        \
		   ./ft_memcpy.c		        \
		   ./ft_memmove.c		        \
		   ./ft_memchr.c		        \
		   ./ft_memcmp.c		        \
		   ./ft_bzero.c		 	        \
		   ./ft_atoi.c		            \
		   ./ft_calloc.c		        \
		   ./ft_isalnum.c		        \
		   ./ft_isalpha.c		        \
		   ./ft_isascii.c		        \
		   ./ft_isdigit.c		        \
		   ./ft_isprint.c		        \
		   ./ft_strdup.c		        \
		   ./ft_tolower.c		        \
		   ./ft_toupper.c
			
SRCS_2	=  ./ft_substr.c		        \
		   ./ft_strjoin.c		        \
		   ./ft_strtrim.c		        \
		   ./ft_split.c		            \
		   ./ft_strmapi.c		        \
		   ./ft_itoa.c		            \
		   ./ft_strmapi.c 	            \
		   ./ft_striteri.c	            \
		   ./ft_putchar_fd.c	        \
		   ./ft_putstr_fd.c	            \
		   ./ft_putendl_fd.c	        \
		   ./ft_putnbr_fd.c

SRCS_BN =  ./ft_lstnew_bonus.c		    \
		   ./ft_lstadd_front_bonus.c    \
		   ./ft_lstsize_bonus.c		    \
		   ./ft_lstlast_bonus.c		    \
		   ./ft_lstadd_back_bonus.c	    \
		   ./ft_lstdelone_bonus.c	    \
		   ./ft_lstclear_bonus.c        \
		   ./ft_lstiter_bonus.c         \
		   ./ft_lstmap_bonus.c

SRCS = 	$(SRCS_1)		                \
	  	$(SRCS_2)         

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

ifdef BONUS_LST
	TOTAL_OBJS = $(OBJS) $(OBJS_BONUS)
else
	TOTAL_OBJS = $(OBJS)
endif

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS) $(OBJS_BONUS)

fclean : clean
	$(RM) $(RMFLAG) $(NAME)

re : fclean all

$(NAME) : $(TOTAL_OBJS) libft.h
	$(AR) $(ARFLAGS) $(NAME) $(TOTAL_OBJS)

bonus : 
	make BONUS_LST=1

.PHONY : all clean fclean re bonus