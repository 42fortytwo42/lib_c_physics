/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_between_two_points_3d.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 15:38:54 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/10 15:50:50 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This algorithm implement the distance calculation between two points in
**	a tri-dimensional space.
**	Return : (value = distance in float).
**
**	Thanks to University Caen Basse-Normandie (Biologie) to my physic lessons.
**	Thomas LE MIGNAN (2014 / Paris - France).
*/

#include "../libmath/libmath.h"
#include "../lib3d/lib3d.h"

float	ft_distance_between_two_points_tridimensional(t_object *object_1,
				t_object *object_2)
{
	float	distance;
	float	calc_x;
	float	calc_y;
	float	calc_z;

	calc_x = object_1->gravity_pos_x - object_2->gravity_pos_x;
	calc_y = object_1->gravity_pos_y - object_2->gravity_pos_y;
	calc_z = object_1->gravity_pos_z - object_2->gravity_pos_z;
	distance = sqrt(pow(calc_x, 2) + pow(calc_y, 2) + pow(calc_z, 2));
	return (distance);
}
