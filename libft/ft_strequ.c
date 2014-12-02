/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 08:39:37 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:47:37 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strequ(char const *s1, char const *s2)
{
	int	len_s1;
	int	len_s2;
	int i;

	i = 0;
	len_s1 = 0;
	len_s2 = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' || s2[i] != '\0')
		{
			if (s1[i] != '\0')
				len_s1 = len_s1 + s1[i];
			if (s2[i] != '\0')
				len_s2 = len_s2 + s2[i];
			if (len_s1 != len_s2)
				return (0);
			i++;
		}
		if (len_s1 == len_s2)
			return (1);
	}
	return (0);
}
