/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:59:49 by dgioia            #+#    #+#             */
/*   Updated: 2022/02/15 14:59:49 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr1;
	int		j;

	j = ft_strlen((char *)s);
	ptr1 = (char *)malloc(j * sizeof(char) + 1);
	if (ptr1 == NULL)
		return (NULL);
	while (j >= 0)
	{
		ptr1[j] = s[j];
		j--;
	}
	return ((char *)ptr1);
}
