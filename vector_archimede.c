/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_archimede.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 16:57:10 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/10 17:20:14 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"
#include "../lib3d/lib3d.h"

float	ft_vector_archimede(t_environment *environment,
							t_object *object, float displaced_volum)
{
	float	vector_archimede;
	float	gravity;
	float	volumic_mass;

	volumic_mass = object->volumic_mass;
	gravity = environment->link_to_physics->gravity;
	if (volumic_mass == 0 || gravity == 0 || displaced_volum == 0)
		return (0);
	vector_archimede = volumic_mass * displaced_volum * gravity;
	return (vector_archimede);
}
