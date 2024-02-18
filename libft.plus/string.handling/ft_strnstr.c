/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && len > 0)
	{
		if (ft_strncmp(&big[i], little, little_len) == 0 && len >= little_len)
			return ((char *)&big[i]);
		i++;
		len--;
	}
	return (NULL);
}

/*int		main(void)
{
	char	str[] = "Ciao come stai?";
	char	str2[] = "come";
	int		i = 0;
	int		len = ft_strlen(str);
	char	*res = ft_strnstr(str, str2, len);

	printf("Strnstr:	%s", res);
}*/
