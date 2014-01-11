/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cinetic_energy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/10 16:47:57 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_cinetic_energy(float speed, float mass)
{
	float	cinetic_energy_joules;

	if (speed == 0 || mass == 0)
		return (0);
	else
		cinetic_energy_joules = ((mass) * (speed) * (speed)) / 2;
	return (cinetic_energy_joules);
}
