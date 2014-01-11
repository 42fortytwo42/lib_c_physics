/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gravitational_first_law.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 14:39:19 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/10 18:40:21 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This algorithm implement gravitational capabilities : Newton First Law
**	If the sum of the exterior forces of an object are equal to zero, we can
**	make the conclusion that the speed vector of the object is a constant.
**
**	Return : (0) if the sum of all exterior forces are equals to zero.
**			(float) if the sum of all exterior forces are not equals to ero.
**
**	Thanks to Universite Caen Basse-Normandie (Biologie) to my physic lessons.
**	Thomas LE MIGNAN (2014 / Paris - France).
*/

#include "../lib3d/lib3d.h"

float	ft_gravitational_first_law(t_object *object)
{
	float				sum_of_all_exterior_forces;
	t_physic_forces		*tmp;

	tmp = object->link_to_forces;
	while (tmp->next != NULL)
	{
		sum_of_all_exterior_forces += tmp->force_value;
		tmp = tmp->next;
	}
	return (sum_of_all_exterior_forces);
}
