/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:06:02 by ivan              #+#    #+#             */
/*   Updated: 2024/10/24 20:07:04 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cha;
	size_t			i;

	str = (unsigned char *)s;
	cha = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == cha)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}
