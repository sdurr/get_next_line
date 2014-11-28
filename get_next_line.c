/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 09:22:58 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/28 21:54:14 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>

char	*ft_read(char *stock, int const fd, int *i)
{
	char			buf[BUFF_SIZE + 1];

	if ((*i = read(fd, buf, BUFF_SIZE)) != EOF)
		buf[*i] = '\0';
	stock = ft_strjoin(stock, buf);
	return (stock);
}

int		get_next_line(int const fd, char **line)
{
	int				i;
	static char		*stock;
	char			*stock2;

	if (line == NULL || fd < 0)
		return (-1);
	if (!stock)
		stock = ft_strnew(1);
	i = 1;
	while (i > 0)
	{
		if ((stock2 = ft_strchr(stock, '\n')) != NULL)
		{
			*stock2 = '\0';
			*line = ft_strdup(stock);
			stock = ft_strnew(1);
			return (1);
		}
		stock = ft_read(stock, fd, &i);
	}
	return (i);
}
