/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   surface_triangle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 19:10:25 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_surface_triangle(float maximum_side, float height)
{
	float	surface_triangle;

	if (maximum_side == 0 || height == 0)
		return (0);
	else
		surface_triangle = maximum_side * (height / 2);
	return (surface_triangle);
}
