/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 09:22:58 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/23 00:33:45 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  ft_strlen(const char *s)
{
	size_t cpt;

	cpt = 0;
	while (*s != '\0')
	{
		cpt++;
		s++;
	}
	return (cpt);
}

char *ft_strjoin(char const *s1, char const *s2)
{
 	int c;
	char *ret;
	int i;
	
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	c = ft_strlen(s1) + ft_strlen(s2);
	if (!(ret = (char *)malloc(sizeof(char*) * c)))
		return (NULL);
	while (*s1 != '\0')
	{
		ret[i++] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		ret[i++] = *s2;
		s2++;
	}
	ret[i] = '\0';
	return (ret);
}

char  *ft_strnew(size_t size)
{
	char *ret;
	int i;

	i = 0;
	if (!(ret = (char *)malloc(sizeof(char*) * size)))
		return (NULL);
	while (size != 0)
	{
		ret[i] = '\0';
		size--;
		i++;
	}
	return (ret);
}

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

	if(line == NULL)
		return (-1);
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
