/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:00:23 by ivan              #+#    #+#             */
/*   Updated: 2024/10/24 20:10:37 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t				i;
	unsigned char		*mst;
	unsigned char		*std;

	mst = (unsigned char *)dst;
	std = (unsigned char *)src;
	if (mst == NULL && std == NULL)
		return (dst);
	i = 0;
	while (i < n)
	{
		mst[i] = std[i];
		i++;
	}
	return (dst);
}
