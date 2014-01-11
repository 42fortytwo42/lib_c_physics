/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surface_trapeze.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 19:18:00 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_surface_trapeze(float height, float big_base,
			float opposite_to_bigbase)
{
	float	surface_trapeze;

	if (height == 0 || big_base == 0 || opposite_to_bigbase == 0)
		return (0);
	else
		surface_trapeze = (big_base + opposite_to_bigbase) * (height / 2);
	return (surface_trapeze);
}
