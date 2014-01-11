/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_trajectory_2d.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 17:41:15 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 13:25:36 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Define y position in function of x in function of gravity in a
**	2d plan.
**
**	Thomas LE MIGNAN (2014 / France - Paris)
**	Thx to UCBN Basse Normandie and 42 school.
*/

#include "libphysics.h"

float	ft_object_trajectory_bidimensional(t_environment *environment,
			t_object *object)
{
	float	y;
	float	gravity;
	float	x;
	float	h;
	float	alpha_angle;

	alpha_angle = object->link_to_possible_actions->action_current_angle;
	h = object->link_to_possible_actions->action_position_init_z;
	x = object->gravity_pos_x;
	gravity = environment->link_to_physics->gravity;
	y = ((-1) * gravity) /
		(2 * pow(object->link_to_possible_actions->action_speed_init, 2) * pow(cos(alpha_angle), 2))
		* (float)pow(x, 2) + tan(alpha_angle) * x + h;
	return (y);
}
