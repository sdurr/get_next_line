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

int		get_next_line(int const fd, char **line)
{
	char buf[BUF_SIZE];
	int ret_read;
	int c;

	c = 0;
	if (BUF_SIZE == 0)
		return (-1);
	while (ret_read = (read(fd, buf, BUF_SIZE)))
	{
	     if (buf[ret_read] == '\n' || buf[ret_read] == '\0')
	     {
		  if (line)
		       free(line);
		  if (!((*line)=(char *)malloc(sizeof(char) * ret_read)))
		       return (-1);
		  while (c < ret_read)
		     {
			  *(*line) = buf[c];
			  (*line)++;
			  c++;
		     }
		  if (c == ret_read)
		  {
		       *(*line) = '\0';
		       return (1);
		  }
		  if (buf[ret_read] == '\0')
		       return (0);
	     }
	}
	return (-1);	
}
