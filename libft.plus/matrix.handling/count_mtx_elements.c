/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_mtx_elements.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_cols(char **mtx)
{
	int	cols;

	cols = 0;
	while (mtx[0][cols])
		cols++;
	return (cols);
}

int	count_rows(char **mtx)
{
	int	rows;

	rows = 0;
	while (mtx[rows] != NULL)
		rows++;
	return (rows);
}

int	count_elements(char **mtx, char c)
{
	int	rows;
	int	cols;
	int	element_nbr;

	rows = -1;
	element_nbr = 0;
	while (mtx[++rows] != NULL)
	{
		cols = -1;
		while (mtx[rows][++cols] != '\0')
		{
			if (mtx[rows][cols] == c)
				element_nbr++;
		}
	}
	return (element_nbr);
}
