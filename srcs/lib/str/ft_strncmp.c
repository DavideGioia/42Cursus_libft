/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:00:29 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/15 15:00:29 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n)
		i++;
	if (i == n)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
