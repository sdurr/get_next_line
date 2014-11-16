/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 09:22:58 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/16 11:37:36 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_copy_line(char *buffer, char **line, int i)
{
	int c;

	c = 0;
	while (c < i)
	{
		*(*line) = buffer[c];
		c++;
		(*line)++;
	}
	*(*line) = '\0';
	if (c == i)
		return (1);
	return (-1);
}

int		get_next_line(int const fd, char **line)
{
	char buf[BUFF_SIZE];
	int ret_read;
	int i;
	int ret;

	i = 0;
	if (BUFF_SIZE == 0)
		return (-1);
	while (ret_read = (read(fd, buf, BUFF_SIZE)))
	{
		if (buf[i] == '\n' || buf[i] == EOF)
		{
			ret = ft_copy_line(buf, line, i);
			if (ret == 1)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (-1);
}
