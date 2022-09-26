/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:58:52 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/15 14:58:52 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned int	i;	
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}
