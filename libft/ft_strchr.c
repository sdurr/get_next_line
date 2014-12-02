/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:29:26 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:45:06 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while ((*s != (char)c) && (*s != '\0'))
			s++;
		if (*s == (char)c)
			return ((char *)s);
	}
	return (NULL);
}
