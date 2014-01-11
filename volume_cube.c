/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   volume_cube.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 18:39:24 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_volume_cube(float height)
{
	float	volum_cube;

	if (height == 0)
		return (0);
	else
		volum_cube = height * height * height;
	return (volum_cube);
}
