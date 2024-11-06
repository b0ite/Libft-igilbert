/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igilbert <igilbert@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:37:46 by ivan              #+#    #+#             */
/*   Updated: 2024/11/04 14:49:13 by igilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strndup(const char *s1, int len)
{
	char	*dup;
	size_t	size;
	size_t	i;

	i = 0;
	size = len + 1;
	dup = malloc(size);
	if (dup == NULL)
		return (NULL);
	while (i < size - 1)
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	count_words(char c, char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

char	**ft_split(char const *str, char c)
{
	int		e;
	int		s;
	int		k;
	char	**res;

	s = 0;
	k = 0;
	res = (char **)malloc(sizeof(char *) * (count_words(c, (char *)str) + 1));
	if (res == NULL)
		return (NULL);
	while (k < count_words(c, (char *)str) && str[s])
	{
		while (str[s] == c && str[s])
			s++;
		e = s;
		while (str[e] != c && str[e])
			e++;
		res[k] = ft_strndup((char *)str + s, e - s);
		k++;
		s = e;
	}
	res[k] = 0;
	return (res);
}