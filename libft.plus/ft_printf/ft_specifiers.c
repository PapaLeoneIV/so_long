/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifiers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:51 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:58 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_specifiers(char c, va_list ap, int *length)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), length);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), length);
	else if (c == 'p')
		ft_putaddr(va_arg(ap, void *), length);
	else if (c == 'd' || c == 'i')
		ft_putnbr_base(va_arg(ap, int), BASE10, length);
	else if (c == 'u')
		ft_putnbr_base_unsigned(va_arg(ap, unsigned long), BASE10, length);
	else if (c == 'x')
		ft_putnbr_base_unsigned(va_arg(ap, unsigned int), BASE16, length);
	else if (c == 'X')
		ft_putnbr_base_unsigned(va_arg(ap, unsigned int), BASE16UPPER, length);
	else if (c == '%')
		ft_putchar('%', length);
}