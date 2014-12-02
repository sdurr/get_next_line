/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:55:39 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:54:20 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;
	int c;

	i = 0;
	if (s2[i] == '\0' || s2[i] == '\0')
		return ((char*)&s1[i]);
	while (s1[i] && n > 0)
	{
		c = i;
		j = 0;
		while (s2[j] == s1[i] && n > 0)
		{
			j++;
			i++;
			n--;
			if (s2[j] == '\0')
				return ((char*)&s1[c]);
		}
		i = c;
		i++;
		n--;
	}
	return (NULL);
}
