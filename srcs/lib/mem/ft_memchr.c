/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:58:40 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/15 14:58:40 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((unsigned char *)&ptr[i]);
		i++;
	}
	return (NULL);
}
