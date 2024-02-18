/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cpd;
	const char	*cps;

	cpd = (char *)dest;
	cps = (const char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	if (cpd > cps)
	{
		while (n--)
			cpd[n] = cps[n];
	}
	else
	{
		while (n--)
			*cpd++ = *cps++;
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
