/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 10:03:04 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 11:56:34 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s)
{
	char	*r;
	int		i;
	int		d;

	i = 0;
	d = 0;
	if (s == NULL)
		return (NULL);
	if (!(r = (char *)malloc(sizeof(char*) * ft_strlen(s))))
		return (NULL);
	while ((s[i] == ' ') || (s[i] == ',') || (s[i] == '\n') || (s[i] == '\t'))
		i++;
	while (s[i] != '\0')
		r[d++] = s[i++];
	i = ft_strlen(r) - 1;
	while ((r[i] == ' ') || (r[i] == ',') || (r[i] == '\n') || (r[i] == '\t'))
		i--;
	r[i + 1] = '\0';
	return (r);
}
