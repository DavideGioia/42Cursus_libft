/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:00:43 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/15 15:00:43 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char *s1, char *set)
{
	size_t		size_s;
	char		*newstring;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	size_s = ft_strlen((char *)s1);
	while (size_s && ft_strchr(set, s1[size_s]))
		size_s--;
	newstring = ft_substr((char *)s1, 0, size_s + 1);
	return (newstring);
}
