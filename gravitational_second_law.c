/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gravitational_second_law.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 15:58:59 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/10 18:42:07 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This algorithm implement gravitational capabilities : Newton Second Law
**	If the sum of the exterior forces of an object are equal to zero, we can
**	make the conclusion that the speed vector of the object is a constant.
**	but the sum of all exterior forces are equal to mass * acceleration vector.
**
**	Return : (0) if the sum of all exterior forces are equals to zero.
**	(float) if the sum of all exterior forces are not equals to ero.
**
**	Thanks to Universite Caen Basse-Normandie (Biologie) to my physic lessons.
**	Thomas LE MIGNAN (2014 / Paris - France).
*/

#include "libphysics.h"

float	ft_gravitational_second_law(t_object *object)
{
	float	sum_of_all_exterior_forces;

	sum_of_all_exterior_forces = ft_gravitational_first_law(object);
	if ((sum_of_all_exterior_forces) != 0)
		return (sum_of_all_exterior_forces);
	else
		return (0);
}

float	ft_gravitational_vector_acceleration(t_object *object)
{
	float	vector_acceleration;
	float   sum_of_all_exterior_forces;
	float	mass_of_the_object;

	mass_of_the_object = object->mass;
	sum_of_all_exterior_forces = ft_gravitational_second_law(object);
	vector_acceleration = sum_of_all_exterior_forces / mass_of_the_object;
	return (vector_acceleration);
}
