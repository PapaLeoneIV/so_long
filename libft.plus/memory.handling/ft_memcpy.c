/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cpd;
	char	*cps;

	i = 0;
	cpd = (char *)dest;
	cps = (char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (i < n)
	{
		cpd[i] = cps[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	*src = "Ciao";
	char	dest[10] = "isso vado";
	size_t	n;

	ft_memcpy(dest, src, 4);
	printf("Copia:  %s", dest);
} */
