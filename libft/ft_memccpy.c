/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 12:59:12 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:38:58 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*ret;
	const char	*srcs;
	int			i;

	i = 0;
	ret = dst;
	srcs = src;
	if (src || dst)
	{
		while (n != 0)
		{
			ret[i] = srcs[i];
			if (srcs[i] == (char)c)
				return (&ret[i + 1]);
			i++;
			n--;
		}
	}
	return (NULL);
}
