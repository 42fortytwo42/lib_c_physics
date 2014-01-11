/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   statistic_number_to_percent.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 15:17:22 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/07 19:26:55 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libphysics.h"

float	ft_number_to_percent(float total, float current)
{
	float	number_to_percent;

	if (current == 0 || total == 0)
		return (0);
	else
		number_to_percent = current / total * 100;
	return (number_to_percent);
}
