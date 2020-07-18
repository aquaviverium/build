/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 02:38:19 by home              #+#    #+#             */
/*   Updated: 2020/07/17 23:16:22 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "universe.h"

void	render_loop(void)
{
	// int	i;

	// i = 0;
	// while ()
	// {
	// 	i++;
	// }
}

/**
* Function that shall handle the visualization of the simulation.
* Note that there should be no params passed in to keep code contact
* with the simulation as little.
*
* This is done so that the graphical aspect of this project shall
* be used as a module that can be removed, replaced, and easily
* changed without affecting the simulation.
*
*/
void	out(void)
{
	get_fabric();
	SDL_RenderPresent(get_display()->renderer);
	SDL_RenderClear(get_display()->renderer);

	process_user_input();
}
