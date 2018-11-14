/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tavelino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 20:28:29 by tavelino          #+#    #+#             */
/*   Updated: 2018/11/14 23:25:44 by tavelino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		gnl_rest(char buf[BUFF_SIZE + 1], size_t len, char *line)
{
	if (!buf[0] && line[0])
		buf[0] = '\0';
	else
	{
		ft_strncpy(buf, &buf[len + 1], BUFF_SIZE + 1);
	}
	return (1);
}

int				get_next_line(int const fd, char **line)
{
	int			b_read;
	char		*tmp;
	size_t		len;
	static char	buf[OPEN_MAX][BUFF_SIZE + 1];

	if (BUFF_SIZE <= 0 || fd < 0 || !line || !(*line = ft_strnew(1))
			|| fd > OPEN_MAX)
		return (-1);
	b_read = 1;
	while (b_read > 0)
	{
		if (!buf[fd][0])
			b_read = read(fd, &buf[fd], BUFF_SIZE);
		if (b_read < 0)
			return (b_read);
		len = ft_strlen_char(buf[fd], '\n');
		tmp = *line;
		*line = ft_strnjoin(tmp, buf[fd], len);
		ft_strdel(&tmp);
		if ((*line && buf[fd][len]) || (!buf[fd][0] && *line[0]))
			return (gnl_rest(buf[fd], len, *line));
		ft_strclr((char *)&buf[fd]);
	}
	return (0);
}
