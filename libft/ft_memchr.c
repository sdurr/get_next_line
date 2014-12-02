/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:22:11 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:39:13 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ret;
	int				i;

	i = 0;
	if (!(ret = (unsigned char *)s))
		return (NULL);
	if (s)
	{
		while (n != 0)
		{
			if (ret[i] == (unsigned char)c)
				return ((char *)&ret[i]);
			n--;
			i++;
		}
	}
	return (NULL);
}
