# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llarue <llarue@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 07:46:47 by llarue            #+#    #+#              #
#    Updated: 2024/01/04 11:58:53 by llarue           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone	

############
# COMPILER #
############

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror

VAL_FLAGS	=	-g3

CPP_FLAGS	=	-std=c++98

DEPS_FLAGS	=	-MMD -MF

#########
# FILES #
#########

MAIN		=	megaphone.cpp

OBJS		=	$(MAIN:.cpp=.o)

DEPS		=	$(OBJS:.o=.d)

###############
# DIRECTORIES #
###############

OBJS_DIR	=	objs

DEPS_DIR	=	$(OBJS_DIR)/.dep

########
# PATH #
########

OBJS_PATH 	=	$(addprefix $(OBJS_DIR)/, $(OBJS))

DEPS_PATH 	=	$(addprefix $(DEPS_DIR)/, $(DEPS))

#########
# RULES #
#########

all: $(NAME)

$(NAME): $(OBJS_PATH)
		$(CC) $(CFLAGS) $(CPP_FLAGS) -o $(NAME) $(OBJS_PATH)

-include $(DEPS_PATH)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR) $(DEPS_DIR)
		$(CC) $(CFLAGS) $(CPP_FLAGS) $(DEPS_FLAGS) $(DEPS_DIR)/$*.d -c $< -o $@

$(OBJS_DIR):
		@mkdir -p $(OBJS_DIR)

$(DEPS_DIR):
		@mkdir -p $(DEPS_DIR)

clean:
		rm -rf $(DEPS_DIR)
		rm -rf $(OBJS_DIR)

fclean:	clean
		rm -rf $(NAME)

re:	fclean all

.PHONY:	all		\
		clean	\
		fclean	\
		re