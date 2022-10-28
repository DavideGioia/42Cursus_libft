/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:57:13 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/15 14:57:13 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_atoi(char *str)
{
	int			x;
	long int	y;

	y = 0;
	x = 1;
	if ((*str == 43 || *str == 45) && ft_isdigit(*(str + 1)))
	{
		if (*str == 45)
			x *= -1;
		str++;
	}
	while (*str <= 57 && *str >= 48)
	{
		if (!ft_isdigit(*str) && *str != '\0')
			return (0);
		y = (y * 10) + ((*str - 48) % 10);
		str++;
	}
	if (!ft_isdigit(*str) && *str != '\0')
		return (0);
	y *= x;
	return (y);
}
