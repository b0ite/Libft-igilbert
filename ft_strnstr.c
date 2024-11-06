/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igilbert <igilbert@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:06:28 by ivan              #+#    #+#             */
/*   Updated: 2024/11/06 15:40:59 by igilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_n;
	size_t	j;

	i = 0;
	j = 0;
	len_n = ft_strlen(needle);
	if (len_n == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			if (len_n == j + 1)
				return ((char *)haystack + i - j);
			else
				j++;
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
