/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 15:32:59 by mduma             #+#    #+#             */
/*   Updated: 2019/07/12 16:14:27 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_readline(char *fd_arr, char **line)
{
	char	*temp;
	int		a;

	a = 0;
	while (fd_arr[a] != '\n' && fd_arr[a] != '\0')
		a++;
	*line = ft_strsub(fd_arr, 0, a);
	if (fd_arr[a] == '\0')
	{
		temp = NULL;
		ft_strdel(&fd_arr);
	}
	else
	{
		temp = ft_strsub(fd_arr, a + 1, ft_strlen(fd_arr + a) + 1);
		ft_strdel(&fd_arr);
	}
	return (temp);
}

int			get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*fd_arr[1025];
	int				ret;
	char			*temp;

	if (fd < 0 || (ret = read(fd, buff, 0) < 0) || !line)
		return (-1);
	if (!fd_arr[fd])
		fd_arr[fd] = ft_strnew(0);
	while (!ft_strchr(fd_arr[fd], '\n') &&
			(ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		temp = ft_strjoin(fd_arr[fd], buff);
		ft_strdel(&fd_arr[fd]);
		fd_arr[fd] = ft_strdupdel(&temp);
	}
	if (ret < BUFF_SIZE && !ft_strlen(fd_arr[fd]))
		return (0);
	fd_arr[fd] = ft_readline(fd_arr[fd], line);
	return (1);
}
