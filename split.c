/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivan <ivan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:37:46 by ivan              #+#    #+#             */
/*   Updated: 2024/10/26 19:53:12 by ivan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char c, char *str)
{
	int		count;
	size_t	i;

	i = 0;
	count = 1;
	while (str[i])
	{
		if (str[i] == c)
		{
			count++;
			while (str[i] == c)
				i++;
		}
		else
			i++;
	}
	if (str[i - 1] == c)
		count--;
	return (count);
}

char	**alloc(char c, char *s, char **tab)
{
	tab = malloc(sizeof(char*) * (count_words(c, (char *)s) + 1));
	if (tab == NULL)
		return (NULL);
	return (tab);
}


char	**split2(char c, int j, int k, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] == c)
				i++;
		else
		{
			while (s[i + j] != c && s[i + j])
				j++;
			tab[k] = malloc(j + 1);
			if (tab[k] == NULL)
				return (NULL);
			j = 0;
			while (s[i] && s[i] != c)
			{
				tab[k][j] = s[i];
				i++;
				j++;
			}
			tab[k][j] = '\0';
			k++;
			j = 0;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	tab = alloc(c, s, tab);
	tab = split2(c, j, &k, s);
	tab[k] = NULL;
	return (tab);
}


