/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (!array)
		return (NULL);
	if (size > 0)
		ft_bzero(array, (nmemb * size));
	return (array);
}

/* int main(void)
{
	size_t	nmemb = 5;
	size_t	size = sizeof(int);
	int		*array = (int *)ft_calloc(nmemb, size);

	if (array != NULL)
	{
		size_t i = 0;
		while (i < nmemb)
		{
			array[i] = i + 1;
			i++;
		}
		size_t j = 0;
		while (j < nmemb)
		{
			printf("%d\n", array[j]);
			j++;
		}
		free(array);
	}
} */
