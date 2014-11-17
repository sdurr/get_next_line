/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdurr <sdurr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/16 09:22:58 by sdurr             #+#    #+#             */
/*   Updated: 2014/11/17 11:31:08 by sdurr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"


int		get_next_line(int const fd, char **line)
{
	char buf[BUF_SIZE];
	int ret_read;
	static int c;
	char *stock;
	int i;

	i = 0;
	c = 0;
	if (!(stock = (char *)malloc(sizeof(char) * 1000)))
		return (-1);
		if (BUF_SIZE == 0)
		return (-1);
	while (ret_read = (read(fd, buf, BUF_SIZE)))
	{
		stock[i] = buf[c];

		//	ft_putchar('\n');
		//ft_putnbr(i);
	if ((stock[i] == '\n') || (stock[i] == '\0'))
	     {
			 if (!(line = malloc(sizeof(char) * 1000)))
				 return (-1);
			 i = 0;
			 if (!(*line = (char *)malloc(sizeof(char) * 1000)))
				 return (-1);
			 while (stock[i] != '\0' && stock[i] != '\n')
			 {
				 // ft_putnbr(i);
				 (*line)[i] = stock[i];
				 i++;
			 }
			 //		 save = c;
			 ft_putstr(stock);
			 if (stock[i] != '\0')
			 {
				 (*line)[i] = '\0';
				 return (1);
			 }
			 if (stock[i] == '\0')
				 return (0);
	     }
		i++;
	}
	return (-1);	
}
