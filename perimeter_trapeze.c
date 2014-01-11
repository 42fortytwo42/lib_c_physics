/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perimeter_trapeze.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 19:15:55 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_perimeter_trapeze(float side_1, float side_2, float side_3,
				float side_4)
{
	float	perimeter_trapeze;

	if (side_1 == 0 || side_2 == 0 || side_3 == 0 || side_4 == 0)
		return (0);
	else
		perimeter_trapeze = (side_1 + side_2 + side_3 + side_4);
	return (perimeter_trapeze);
}
