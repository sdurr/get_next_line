/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:40:36 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:40:19 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ret;
	const char	*srcs;

	ret = dst;
	srcs = src;
	if (dst != NULL && src != NULL)
	{
		if (ret < srcs)
		{
			while (len--)
				*ret++ = *srcs++;
			return (dst);
		}
		else
		{
			srcs += len - 1;
			ret += len - 1;
			while (len--)
				*ret-- = *srcs--;
			return (dst);
		}
	}
	return (NULL);
}
