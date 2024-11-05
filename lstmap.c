/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igilbert <igilbert@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:24:22 by igilbert          #+#    #+#             */
/*   Updated: 2024/11/05 16:34:18 by igilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*ret;

	temp = ft_lstnew(f(lst->content));
	ret = temp;
	while (lst->next)
	{
		if(!temp)
			return (NULL);
		temp->next = ft_lstnew(f(lst->next->content));
		lst = lst->next;
		temp = temp->next;
	}
	return (ret);
}