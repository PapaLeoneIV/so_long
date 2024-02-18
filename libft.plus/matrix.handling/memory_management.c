/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_management.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**mtx_alloc(int rows, int cols)
{
	int		i;
	char	**mtx;

	i = 0;
	mtx = ft_calloc(rows, sizeof(char *));
	if (!mtx)
		ft_printf("Error during row allocation.\n");
	while (i < rows)
	{
		mtx[i] = ft_calloc(cols, sizeof(char));
		if (!mtx[i])
			ft_printf("Error during col allocation.\n");
		i++;
	}
	return (mtx);
}

char	**copy_mtx(char **mtx)
{
	char	**res;
	int		rows;

	rows = -1;
	res = ft_calloc(count_rows(mtx), sizeof(char *));
	while (mtx[++rows])
		res[rows] = ft_strdup(mtx[rows]);
	return (res);
}

void	free_mtx(char **mtx)
{
	int	i;
	int	len;

	len = count_rows(mtx);
	i = 0;
	while (i < len)
	{
		free(mtx[i]);
		mtx[i] = NULL;
		i++;
	}
	free(mtx);
}
