/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expansion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 01:20:29 by home              #+#    #+#             */
/*   Updated: 2021/03/02 21:48:07 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "universe.h"

void	aethersynthesis(t_fabric *fabric)
{
	int	i;
	int	size;

	i = 0;
	size = 100;
	fabric->g0 = malloc(sizeof(*fabric->g0) * (size));
	fabric->g1 = malloc(sizeof(*fabric->g1) * (size));
	while (i < size)
	{
		fabric->g0[i] = calloc(size, sizeof(*(fabric->g0[i])));
		fabric->g1[i] = calloc(size, sizeof(*(fabric->g1[i])));
		i++;
	}

	// fabric->g0[0][0].quanta = 0xFF0000;

	// fabric->g0[3][3].quanta = 0x0000FF;
	// fabric->g0[3][8].quanta = 0x00000F;
	// fabric->g0[6][8].quanta = 0x0000FF;
	fabric->g0[0][4].quanta = 0x0000FF;
	// fabric->g0[1][2].quanta = 0x0000FF;
	fabric->g0[50][30].quanta = 0x0000FF;

	fabric->grid = fabric->g0;
}
