/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:06:02 by dgioia            #+#    #+#             */
/*   Updated: 2022/09/26 18:03:46 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(int *content)
{
	t_list *nlist;

	nlist = (t_list *)malloc(sizeof(t_list));
	if (!nlist)
		return (NULL);
	nlist->content = content;
	nlist->next = NULL;
	return (nlist);
}
