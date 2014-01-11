/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimeter_parallelogram.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 19:46:02 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_perimeter_parallelogram(float side_1, float side_2)
{
	float	perimeter_parallelogram;

	if (side_1 == 0 || side_2 == 0)
		return (0);
	else
		perimeter_parallelogram = (side_1 * 2) + (side_2 * 2);
	return (perimeter_parallelogram);
}
