/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:57:24 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:39:28 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *r1;
	const unsigned char *r2;

	if (s1 != NULL && s2 != NULL)
	{
		r1 = s1;
		r2 = s2;
		while (n != 0)
		{
			if (*r1 != *r2)
				return ((int)*r1 - (int)*r2);
			r1++;
			r2++;
			n--;
		}
	}
	return (0);
}
