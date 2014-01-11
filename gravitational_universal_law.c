/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gravitational_universal_law.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 14:39:19 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 18:13:46 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This algorithm implement gravitational capabilities : Newton Universal Law
**
**	Thanks to University Caen Basse-Normandie (Biology) to my physic lessons.
**
*/

#include "../lib3d/lib3d.h"
#include "libphysics.h"
#include "../libmath/libmath.h"

float	ft_gravitational_universal_law(t_object *object_1,
			t_object *object_2)
{
	float	sum_of_all_exterior_forces;
	float	unit_vector;
	float	g_constant;
	float	distance;
	float	power;

	power = pow(10, -11);
	distance = ft_distance_between_two_points_tridimensional(object_1,
												object_2);
	g_constant = (6/*,67384*/) * power;
	unit_vector = 1;
	sum_of_all_exterior_forces = unit_vector *
		(g_constant * object_1->mass * object_2->mass) / pow(distance, 2);
	return (sum_of_all_exterior_forces);
}
