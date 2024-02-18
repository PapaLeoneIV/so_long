/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:53 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:59 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/* void	ulstr(unsigned int i, char *str)
{
	if (*str >= 65 && *str <= 90)
		*str += 32;
	else if (*str >= 97 && *str <= 122)
		*str -= 32;

}

int		main(void)
{
	char	str[] = "Ciao, come va?";
	int		i = 0;
	int		len = ft_strlen(str);

	ft_striteri(str, ulstr);
	while (str[i] && i < len)
	{
		printf("Striteri: %c\n", str[i]);
		i++;
	}
} */