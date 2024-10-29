/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:06:17 by ivan              #+#    #+#             */
/*   Updated: 2024/10/24 20:11:47 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	k = ft_strlen(dst);
	if (k < size - 1 && size > 0)
	{
		while (src[i] && i + k < size - 1)
		{
			dst[i + k] = src[i];
			i++;
		}
		dst[i + k] = '\0';
	}
	if (k >= size)
		k = size;
	return ((size_t)ft_strlen(src) + k);
}
