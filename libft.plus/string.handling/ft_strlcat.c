/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	res = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}

/*int	main() {
	const char	str1[] = "Hello, ";
	char		dest[20] = "Hello, ";
	const char	src[] = "world!";
	size_t		result_len = ft_strlcat(dest, src, sizeof(dest));

	printf("Dopo la concatenazione: %s\n", dest);
	printf("La lunghezza totale dopo la concatenazione è %zu\n", result_len);
}*/
