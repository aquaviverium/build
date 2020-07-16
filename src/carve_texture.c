/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   carve_texture.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 19:51:55 by home              #+#    #+#             */
/*   Updated: 2020/07/16 03:41:27 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "master.h"

SDL_Rect	*carve__texture(void)
{
	int			row;
	int			col;
	SDL_Rect	*result;

	row = 0;
	result = malloc(sizeof(*result) * (NAN_VAL * NAN_VAL));
	while (row < NAN_VAL)
	{
		col = 0;
		while (col < NAN_VAL)
		{
			result[row * NAN_VAL + col].h = NAN_VAL;
			result[row * NAN_VAL + col].w = NAN_VAL;
			result[row * NAN_VAL + col].x = (col * NAN_VAL);
			result[row * NAN_VAL + col].y = (row * NAN_VAL);
			col++;
		}
		row++;
	}
	return (result);
}
