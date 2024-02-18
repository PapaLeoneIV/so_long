/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:50 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:58 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putaddr(void *ptr, int *length)
{
	uintptr_t	address;

	if (ptr == NULL)
	{
		ft_putstr("(nil)", length);
		return ;
	}
	address = (uintptr_t)ptr;
	ft_putstr("0x", length);
	ft_putnbr_base_unsigned_long(address, BASE16, length);
}

/* int main()
{
	int length = 0;
	int value = 42;
	void *ptr = &value;
	ft_putaddr(ptr, &length);
} */
