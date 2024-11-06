/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igilbert <igilbert@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:50:51 by igilbert          #+#    #+#             */
/*   Updated: 2024/11/06 14:40:20 by igilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!(*lst) || !lst || !del)
		return ;
	if ((*lst)->next)
		ft_lstclear(&(*lst)->next, del);
	if ((*lst)->content != NULL)
		del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
