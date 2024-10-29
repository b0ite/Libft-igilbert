/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:37:24 by ivan              #+#    #+#             */
/*   Updated: 2024/10/26 19:37:25 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*al;
	size_t	i;

	i = 0;
	al = malloc(size * count);
	if (al == NULL)
		return (NULL);
	while (i < count)
	{
		((int *)al)[i] = 0;
		i++;
	}
	return (al);
}
