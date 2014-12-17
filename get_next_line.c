/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 09:22:58 by sdurr             #+#    #+#             */
/*   Updated: 2014/12/15 11:28:22 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

static char		*ft_read(char *stock, int const fd, int *i)
{
	char			*buf;

	buf = ft_strnew(BUFF_SIZE + 1);
	if ((*i = read(fd, buf, BUFF_SIZE)) != EOF && *i > 0)
	{
		buf[*i] = '\0';
		stock = ft_strjoin(stock, buf);
	}
	return (stock);
}

int				get_next_line(int const fd, char **line)
{
	int				i;
	static char		*stock = NULL;
	char			*stock2;

	if (line == NULL || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	if (!stock && (stock = ft_strnew(1)) == NULL)
		return (-1);
	i = 1;
	while (i > 0)
	{
		stock = ft_read(stock, fd, &i);
		if ((stock2 = ft_strchr(stock, '\n')) != NULL)
		{
			*stock2 = '\0';
			if (!(*line = ft_strdup(stock)))
				return (-1);
			ft_memmove(stock, stock2 + 1, ft_strlen(stock2 + 1) + 1);
			return (1);
		}
	}
	if (!(*line = ft_strdup(stock)))
		return (-1);
	stock = ft_strnew(1);
	return (i);
}
