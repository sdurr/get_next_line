/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:06:30 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:55:35 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int c;

	j = 0;
	i = 0;
	if (s1[i] == '\0' || s2[j] == '\0')
		return ((char*)&s1[i]);
	while (s1[i] != '\0')
	{
		c = i;
		j = 0;
		while (s1[i] == s2[j])
		{
			i++;
			j++;
			if (s2[j] == '\0')
				return ((char*)&s1[c]);
		}
		i = c;
		i++;
	}
	return (NULL);
}
