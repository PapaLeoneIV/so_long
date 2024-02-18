/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)s;
	while (len > 0)
	{
		*ptr = c;
		ptr++;
		len --;
	}
	return (s);
}

/* int		main(void)
{
	char	str[] = "Ciao";
	size_t len = ft_strlen(str);
	int i = 0;

	char *str1 = ft_memset(str, 57, len);
	while (str[i] != '\0')
	{
		printf("Memset:		%c\n", str[i]);
		i++;
	}
} */
