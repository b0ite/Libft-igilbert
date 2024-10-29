/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:06:35 by ivan              #+#    #+#             */
/*   Updated: 2024/10/24 20:06:38 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		acc;

	i = 0;
	acc = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			acc = i;
		i++;
	}
	if ((char)c == s[i])
		acc = i;
	if (acc != -1)
		return ((char *)(s + acc));
	return (NULL);
}
