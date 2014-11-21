/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 09:22:58 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/22 00:48:53 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int		ft_line_malloc(char *s, char c, int i)
{
	int len;
	int j;

	j = i;
	len = 1;
	while (s[j] != c && s[j] != '\0')
	{
		len++;
		j++;
	}
	return (len);
}

int		get_next_line(int const fd, char **line)
{
	char  buf[BUFF_SIZE];
	char *stock;
	int i;
	static	int j = 0;
	int ret_read;

	i = 0;
	stock = ft_strnew(1);

	while ((ret_read = read(fd, buf, BUFF_SIZE)) == 1)
	{
		buf[BUFF_SIZE] = '\0';
		stock = ft_strjoin(stock, buf);
	}

	ft_putchar('\n');
	ft_putnbr(j);
	ft_putchar('\n');
	ft_putstr(stock);
	ft_putchar('\n');

	while (stock[j] != '\0')
	{
		if(!(line = (char**)malloc(sizeof(char) * 1)))
		{
			ft_putstr("error malloc 1");
			return (-1);
		}
		if(!(*line = (char*)malloc(sizeof(char) * ft_line_malloc(stock, '\n', j) + 1)))
		{
			ft_putstr("error malloc 2");
			return (-1);
		}
		while (stock[j] != '\n')
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putnbr(j);
			ft_putchar('\n');
			(*line)[i] = stock[j];
			ft_putchar(stock[j]);
			ft_putchar('\n');
			//ft_putnbr(i);
			//ft_putstr(*line);
			//ft_putchar('\n');
			//ft_putchar(stock[j]);
			//ft_putchar('\n');		
			j++;
			i++;
		}
		j++;
		//ft_putnbr(j);
		(*line)[i] = '\0';
		ft_putstr("line = ");
		ft_putstr(*line);
		ft_putchar('\n');
		if (stock[j] != '\0')
			return (1);
		else
			return (0);
		//ft_putchar('\n');
		//ft_putstr(stock);
	}
	//ft_putchar('\n');
	//ft_putnbr(j);
	ft_putstr("error");
	return (-1);
}
