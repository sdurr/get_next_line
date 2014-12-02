/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 11:28:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:49:12 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		size_bkp;
	char		*dst_bkp;
	const char	*src_bkp;

	dst_bkp = dst;
	src_bkp = src;
	size_bkp = size;
	while (size_bkp-- != 0 && *dst_bkp != '\0')
		dst_bkp++;
	len = dst_bkp - dst;
	size_bkp = size - len;
	if (size_bkp == 0)
		return (len + ft_strlen(src_bkp));
	while (*src_bkp != '\0')
	{
		if (size_bkp != 1)
		{
			*dst_bkp++ = *src_bkp;
			size_bkp--;
		}
		src_bkp++;
	}
	*dst_bkp = '\0';
	return (len + (src_bkp - src));
}
