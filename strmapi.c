/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igilbert <igilbert@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:55:07 by igilbert          #+#    #+#             */
/*   Updated: 2024/11/04 15:00:27 by igilbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *res;
    int     i;

    res = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
    if (res == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    return (res);
}