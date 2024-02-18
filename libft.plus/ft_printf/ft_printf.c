/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:50 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:58 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	va_list	ap;
	int		length;

	i = 0;
	va_start(ap, str);
	if (!str)
		return (0);
	length = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i++], &length);
		else if (str[i++] == '%')
		{
			ft_specifiers(str[i], ap, &length);
			i++;
		}
	}
	va_end(ap);
	return (length);
}

/* int main ()
{
	int c = 47648349;
	void *ptr;

	ptr = NULL;
	size_t i, j;

	i = ft_printf("%X , %X , %X , %X , %X , 
	%X , %X , %X", c, c, c, c ,c ,c ,c ,c);
	j = ft_printf("%d\n, c");

	printf("i :%zu j: %zu", i, j);
} */
