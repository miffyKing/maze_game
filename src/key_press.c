/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcho <bcho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:10:04 by bcho              #+#    #+#             */
/*   Updated: 2023/01/17 13:17:23 by bcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press(int keycode, t_game *game)
{
	const int	transform[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

	if (keycode == KEY_ESC)
		close_exit(game);
	else if (keycode == KEY_W)
		move(game, transform[0]);
	else if (keycode == KEY_S)
		move(game, transform[1]);
	else if (keycode == KEY_A)
		move(game, transform[2]);
	else if (keycode == KEY_D)
		move(game, transform[3]);
	return (0);
}
