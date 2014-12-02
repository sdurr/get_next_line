/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:23:22 by sdurr             #+#    #+#             */
/*   Updated: 2014/12/01 11:45:02 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	if (src || dst)
	{
		while (n && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
			n--;
		}
		while (n--)
			dst[i++] = '\0';
		return (dst);
	}
	return (NULL);
}
