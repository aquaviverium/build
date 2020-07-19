/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expansion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 01:20:29 by home              #+#    #+#             */
/*   Updated: 2020/07/19 00:55:58 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "universe.h"

void	aethersynthesis(t_fabric *fabric)
{
	int	i;
	int	size;

	i = 0;
	size = 10;
	fabric->g0 = malloc(sizeof(*fabric->g0) * (size));
	fabric->g1 = malloc(sizeof(*fabric->g1) * (size));
	while (i < size)
	{
		fabric->g0[i] = calloc(size, sizeof(*(fabric->g0[i])));
		fabric->g1[i] = calloc(size, sizeof(*(fabric->g1[i])));
		i++;
	}

	fabric->g0[3][3].quanta = 0x0000FF;

	fabric->grid = fabric->g0;
}
