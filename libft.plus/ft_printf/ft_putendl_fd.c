/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:19:50 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:19:58 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, xstrlen(s));
	write(fd, "\n", 1);
}
/* 
int		main (void)
{
	char *str = "Isso";
	int fd = open("test.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("Failure during opening\n");
		return (1);
	}
	ft_putendl_fd(str, fd);
	close(fd);
} */
