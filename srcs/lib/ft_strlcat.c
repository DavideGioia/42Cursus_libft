/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:00:09 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/15 15:00:09 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = ft_strlen(dest);
	j = ft_strlen((char *)src);
	x = 0;
	if (size <= i)
		x = j + size;
	else
		x = j + i;
		j = 0;
	while (src[j] != '\0' && i + 1 < size)
		dest[i++] = src[j++];
	if (j > 0)
		dest[i] = '\0';
	return (x);
}
