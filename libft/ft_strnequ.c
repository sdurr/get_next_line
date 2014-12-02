/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 08:59:50 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:52:02 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		len_s1;
	int		len_s2;
	int		i;

	i = 0;
	len_s1 = 0;
	len_s2 = 0;
	if (s1 && s2)
	{
		while (s1[i] && s2[i] && n--)
		{
			len_s1 = len_s1 + s1[i];
			len_s2 = len_s2 + s2[i];
			i++;
			if (len_s1 != len_s2)
				return (0);
		}
	}
	return (1);
}
