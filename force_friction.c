/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   force_friction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 17:20:46 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/11 13:39:43 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	*ft_force_friction(float coeff_proportionality, float vector_x,
						  float vector_y, float vector_z)
{
	float	***vector_friction;
	float	*p_tab;
	float	sign;

	sign = -1;
	p_tab = (float*)malloc(sizeof(float) * 10);
	p_tab = &vector_friction[0][0][0];
	vector_friction[1][0][0] = sign * coeff_proportionality * vector_x;
	vector_friction[0][1][0] = sign * coeff_proportionality * vector_y;
	vector_friction[0][0][1] = sign * coeff_proportionality * vector_z;
	return (p_tab);
}
