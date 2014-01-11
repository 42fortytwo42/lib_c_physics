/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimeter_triangle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 19:47:22 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_perimeter_triangle(float height, float side_1, float side_2,
				float side_3)
{
	float	perimeter_triangle;

	if (height == 0 || side_1 == 0 || side_2 == 0)
		return (0);
	else
		perimeter_triangle = side_1 + side_2 + side_3;
	return (perimeter_triangle);
}
