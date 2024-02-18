/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rileone <riccardo.leone@student.42fir      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:49:31 by rileone           #+#    #+#             */
/*   Updated: 2024/02/18 15:49:34 by rileone          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"

int	main(int ac, char **av)
{
	t_container	ptr;
	char		*path;

	path = NULL;
	if (ac > 1)
		path = av[1];
	if (check_args(ac, path))
	{
		init_all_innit(&ptr, path);
		print_game_start();
		mlx_hook(ptr.window, KeyPress, KeyPressMask, &execute_game, &ptr);
		mlx_hook(ptr.window, KeyPress, KeyPressMask, &close_window, &ptr);
		mlx_hook(ptr.window, 17, 1L << 17, &quit_game, &ptr);
		mlx_key_hook(ptr.window, &execute_game, &ptr);
		insert_images(&ptr);
		mlx_loop_hook(ptr.mlx, &render_sprite_loop, &ptr);
		mlx_loop(ptr.mlx);
	}
	return (0);
}
