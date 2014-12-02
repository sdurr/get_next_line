/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 09:25:33 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:44:15 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	**ft_split_s(char const *s, char **ret, char *tmp, char c)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (ft_word_long((char *)s, c, i) == -1)
		{
			ret[j] = ft_strdup(s);
			return (ret);
		}
		tmp = ft_strnew(ft_word_long((char *)s, c, i));
		if (s[i] != '\0')
			i = ft_copy_tmp((char *)s, i, c, tmp);
		ret[j] = ft_strdup(tmp);
		if (j < ft_count_char((char *)s, c) - 1)
			j++;
	}
	return (ret);
}
