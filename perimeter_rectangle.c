/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimeter_rectangle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 19:04:19 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_perimeter_rectangle(float width, float length)
{
	float	perimeter_rectangle;

	if (width == 0 || length == 0)
		return (0);
	else
		perimeter_rectangle = (width * 2) + (length * 2);
	return (perimeter_rectangle);
}
