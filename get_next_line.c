/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 09:22:58 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/22 22:35:35 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int		ft_line(char *s, int i)
{
	int		len;
	int		j;

	j = i;
	len = 1;
	while (s[j] != '\n' && s[j] != '\0')
	{
		len++;
		j++;
	}
	return (len);
}

int		get_next_line(int const fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				i;
	static char		*stock;
	static	int		j = 0;

	if (!stock)
		stock = ft_strnew(1);
	while ((i = read(fd, buf, BUFF_SIZE)) != EOF && i > 0)
	{
		buf[i] = '\0';
		stock = ft_strjoin(stock, buf);
	}
	i = 0;
	if (stock[j] == '\n')
		j++;
	while (stock[j] != '\0')
	{
		if (!(*line = (char*)malloc(sizeof(char) * ft_line(stock, j) + 1)))
			return (-1);
		while (stock[j] != '\n' && stock[j] != '\0')
			(*line)[i++] = stock[j++];
		(*line)[i] = '\0';
		return (1);
	}
	return (0);
}
