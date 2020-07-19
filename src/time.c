/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 20:52:34 by home              #+#    #+#             */
/*   Updated: 2020/07/19 01:01:20 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "universe.h"

void	toggle_double_buffer(t_fabric *fabric)
{
	t_aether **g0;
	t_aether **g1;

	g0 = fabric->g0;
	g1 = fabric->g1;

	if (fabric->grid == g0)
		fabric->grid = g1;
	else if (fabric->grid == g1)
		fabric->grid = g0;
	else
		printf(RED"Error: toggle_double_buffer, invalid fabric\n"COLOR_RESET);
}

void	update_square(t_aether **dest, t_aether **src, int row, int col)
{
	int	split;

	split = (src[row][col].quanta) / 4;

	dest[(row + 1 + SP_HEIGHT) % (SP_HEIGHT)][(col + 0 + SP_WIDTH) % (SP_WIDTH)].quanta += split;
	dest[(row - 1 + SP_HEIGHT) % (SP_HEIGHT)][(col + 0 + SP_WIDTH) % (SP_WIDTH)].quanta += split;
	dest[(row + 0 + SP_HEIGHT) % (SP_HEIGHT)][(col + 1 + SP_WIDTH) % (SP_WIDTH)].quanta += split;
	dest[(row + 0 + SP_HEIGHT) % (SP_HEIGHT)][(col - 1 + SP_WIDTH) % (SP_WIDTH)].quanta += split;
}

void	clear_dest(t_aether **dest)
{
	int	row;

	row = 0;
	while (row < SP_HEIGHT)
	{
		bzero(dest[row], sizeof(*dest[row]) * (SP_WIDTH));
		row++;
	}
}

void	next(t_fabric *fabric)
{
	int	row;
	int	col;

	t_aether	**dest;

	if (fabric->grid == fabric->g0)
		dest = fabric->g1;
	else
		dest = fabric->g0;
	clear_dest(dest);

	row = 0;
	while (row < SP_HEIGHT)
	{
		col = 0;
		while (col < SP_WIDTH)
		{
			update_square(dest, fabric->grid, row, col);
			col++;
		}
		row++;
	}

	printf("DEST: %d\n", dest[3][3].quanta);

	toggle_double_buffer(fabric);
	return ;
}
