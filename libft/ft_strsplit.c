/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:17:09 by sdurr             #+#    #+#             */
/*   Updated: 2014/12/02 09:55:02 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		j;
	int		k;

	i = ft_count_char((char*)s, c);
	j = 0;
	if (!s)
		return (NULL);
	if (!(ret = (char **)malloc(sizeof(char*) * i + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] && k++)
			i++;
		if (k)
			ret[j++] = ft_strsub(s, i - k, k);
	}
	ret[j] = '\0';
	return (ret);
}
