#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 12:25:27 by tle-mign          #+#    #+#              #
#    Updated: 2014/01/10 18:29:30 by tle-mign         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libphysics.a

CFLAGS = -Wall -Werror -Wextra

CC = gcc -c

AR = ar rc

RANLIB = ranlib

HEADER = libphysics.h

SRC =	absolute.c \
		angle_degrees_to_radians.c \
		angle_radians_to_degrees.c \
		cinetic_energy.c \
		convert_cubic_meter_to_liter.c \
		convert_liter_to_cubic_meter.c \
		distance_between_two_points_3d.c \
		force_friction.c \
		gravitational_first_law.c \
		gravitational_second_law.c \
		gravitational_third_law.c \
		gravitational_universal_law.c \
		object_trajectory_2d.c \
		perimeter_circle.c \
		perimeter_parallelogram.c \
		perimeter_rectangle.c \
		perimeter_square.c \
		perimeter_trapeze.c \
		perimeter_triangle.c \
		speed.c \
		statistic_number_to_percent.c \
		surface_circle.c \
		surface_parallelogram.c \
		surface_rectangle.c \
		surface_square.c \
		surface_trapeze.c \
		surface_triangle.c \
		volume_cone.c \
		volume_cube.c \
		volume_cylinder.c \
		volume_prism.c \
		volume_pyramid.c \
		volume_sphere.c \
		volumic_mass.c \
		weight.c

OBJ = $(SRC:.c=.o)

RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		@echo ------------ 42 -------------
		@echo -----------------------------
		@echo --- Projet LIBPHYSICS --GO GO GO -
		@echo -----------------------------
		@echo ------------ 42 -------------
		@echo Conception librairie libphysics.a
		@echo -----------------------------
		@echo --- Compilation en cours ----
		$(CC) $(CFLAGS) $(SRC)
		@echo --- Compilation terminee ----
		@echo -----------------------------
		@echo --- Creation librairie ------
		$(AR) $(NAME) $(OBJ) $(HEADER)
		@echo --- librairie disponible ----
		@echo -----------------------------
		@echo indexation de la librairie en cours
		@echo -----------------------------
		$(RANLIB) $(NAME)
		@echo -----------------------------
		@echo indexation de la librairie effectue
		@echo -----------------------------
		@echo Conception librairie libphysics.a OK
		@echo -----------------------------

clean :
			$(RM) $(OBJ)

fclean :	clean
			$(RM) $(NAME)

re :	fclean all
