/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libphysics.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 15:28:52 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 13:26:38 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPHYSICS_H
# define LIBPHYSICS_H

# include "../lib3d/lib3d.h"
# include "../libmath/libmath.h"

/*
**	Mass and weight calculation !
 */
float		ft_weight(float gravity, float mass);
/*
**	Volumic Mass calculation !
 */
float		ft_volumic_mass(float mass, float volum);
/*
**	Volume calculation !
 */
float		ft_volume_cube(float height);
float		ft_volume_prism(float height, float width, float length);
float		ft_volume_pyramid(float height, float width, float length);
float		ft_volume_cylinder(float height, float radius, float pi);
float		ft_volume_cone(float height, float radius, float pi);
float		ft_volume_sphere(float radius, float pi);
/*
**	Speed and acceleration calculation !
*/
float		ft_speed(float distance, long long diff_time);
/*
**	Cinetic energy calculation !
*/
float		ft_cinetic_energy(float speed, float mass);
/*
**	Convert some stuff !
*/
float		ft_convert_liter_to_cubic_meter(float liter);
float		ft_convert_cubic_meter_2_liter(float cubic_meter);
/*
**	Perimeter calculation !
*/
float		ft_perimeter_square(float side);
float		ft_perimeter_rectangle(float width, float length);
float		ft_perimeter_triangle(float height, float side_1, float side_2,
												float side_3);
float		ft_perimeter_parallelogram(float side_1, float side_2);
float		ft_perimeter_trapeze(float side_1, float side_2, float side_3,
								 float side_4);
float		ft_perimeter_circle(float radius, float pi);
/*
**	Surface calculation !
*/
float		ft_surface_square(float side);
float		ft_surface_rectangle(float width, float length);
float		ft_surface_triangle(float maximum_side, float height);
float		ft_surface_parallelogram(float side_1, float side_2);
float		ft_surface_trapeze(float height, float big_base,
							   float opposite_to_bigbase);
float		ft_surface_circle(float radius, float pi);
/*
**	Statistics calculation !
*/
float		ft_number_to_percent(float total, float current);
/*
**	Make absolute values !
*/
float		ft_absolute_this(float this);
/*
**	Comprehensive angle !
*/
float		ft_radians_to_degrees(float radians);
float		ft_degrees_to_radians(float degrees);
/*
**	Gravitational laws !
*/
float		ft_gravitational_universal_law(t_object *object_1,
									t_object *object_2);
float		ft_gravitational_first_law(t_object *object);
float		ft_gravitational_second_law(t_object *object);
float		ft_gravitational_third_law(float force);
/*
**	Comprehensive acceleration vector !
*/
float		ft_gravitational_vector_acceleration(t_object *object);
/*
**	Comprehensive Archimede !
*/
float		ft_vector_archimede(t_environment *environment,
						t_object *object, float displaced_volum);
/*
**	Comprehensive Friction forces !
*/
/*
float		*ft_force_friction(float coeff_proportionality, float vector_x,
						float vector_y, float vector_z);
*/
/*
**	Comprehensive Object Trajectory !
*/
float		ft_object_trajectory_bidimensional(t_environment *environment,
									t_object *object);
/*
**	Calculation from 2 points in a tridimensional matrix !
*/
float   ft_distance_between_two_points_tridimensional(t_object *object_1,
									t_object *object_2);
#endif /* !LIBPHYSICS_H */
