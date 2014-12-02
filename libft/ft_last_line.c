/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/20 15:05:52 by sdurr             #+#    #+#             */
/*   Updated: 2014/12/01 11:22:35 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	**ft_last_line(char const *s, char **ret, char c)
{
	int		j;
	char	*tmp;

	j = 0;
	tmp = ft_strrchr(s, c);
	tmp++;
	while (ret[j])
		j++;
	ret[j - 1] = ft_strdup(tmp);
	return (ret);
}
