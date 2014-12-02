/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 14:14:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/12/01 12:28:00 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	if (s)
	{
		if (c == 0)
			return ((char*)&s[ft_strlen(s)]);
		while (s[i] != (char)c && s[i] != '\0' && i >= 0)
			i--;
		if (i >= 0 && s[i] == (char)c)
			return ((char*)&s[i]);
	}
	return (NULL);
}
