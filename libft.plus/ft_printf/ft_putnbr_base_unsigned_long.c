/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_unsigned_long.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:50 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:58 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_base_unsigned_long(unsigned long nbr, char *base, int *length)
{
	size_t	base_len;

	base_len = xstrlen(base);
	if (nbr >= base_len)
		ft_putnbr_base_unsigned_long(nbr / base_len, base, length);
	if ((nbr % base_len) < 10)
		ft_putchar((nbr % base_len) + '0', length);
	else
		ft_putchar(base[nbr % base_len], length);
}

/* int main()
{
	unsigned long number = 4242424242424242;
	int length = 0;

	ft_putnbr_base_unsigned_long(number, BASE10, &length);
} */
