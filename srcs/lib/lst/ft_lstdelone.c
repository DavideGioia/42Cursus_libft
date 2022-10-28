/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgioia <dgioia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:56:25 by dgioia            #+#    #+#             */
/*   Updated: 2022/10/28 16:29:05 by dgioia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(int *))
{
	t_list	*tmp;

	tmp = lst;
	if (lst != NULL)
	{
		lst = tmp->next;
		del(&tmp->content);
		free(tmp);
	}
}
