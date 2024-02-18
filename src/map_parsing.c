/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:49:31 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:49:34 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	check_newline(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '\n')
	{
		free(s);
		print_error(INVALID_CHARS);
		exit(0);
	}
	while (s && s[i] && s[i + 1])
	{
		if (s[i] == '\n' && s[i + 1] == '\n')
			return (0);
		i++;
	}
	return (1);
}

char	*get_line(char *path)
{
	int		fd;
	char	*line;
	char	*tmp;
	char	*res;

	res = NULL;
	tmp = NULL;
	fd = open(path, O_RDONLY);
	while (42)
	{
		line = gnl(fd);
		if (line == NULL)
		{
			free(line);
			break ;
		}
		tmp = strjoin_gnl(&res, line);
		free(line);
		res = tmp;
	}
	close(fd);
	return (tmp);
}

char	**get_mtx(char *path)
{
	char	*tmp;
	char	**res;

	res = NULL;
	tmp = get_line(path);
	if (tmp == NULL)
		return (NULL);
	if (!check_newline(tmp))
	{
		free(tmp);
		print_error(INVALID_PARSING);
		exit(0);
	}
	res = ft_split(tmp, '\n');
	free(tmp);
	return (res);
}
