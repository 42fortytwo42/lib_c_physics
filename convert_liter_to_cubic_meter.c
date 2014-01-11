* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_liter_to_cubic_meter.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 18:55:29 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_convert_liter_to_cubic_meter(float liter)
{
	float	cubic_meter;

	if (liter == 0)
		return (0);
	else
		cubic_meter = liter / 1000;
	return (cubic_meter);
}
