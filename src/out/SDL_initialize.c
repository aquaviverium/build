/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SDL_initialize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 05:22:09 by home              #+#    #+#             */
/*   Updated: 2020/07/17 23:50:01 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "universe.h"

void	SDLU_start(t_display *dest)
{
	SDL_Window	*window;

	printf(BOLDBLUE"SDL"COLOR_RESET" is "BOLDCYAN"initalizing.\n");
	SDL_Init(SDL_INIT_EVERYTHING);
	window = SDL_CreateWindow(
				WIN_TITLE,
				WIN_POS_X, WIN_POS_Y,
				WIN_WIDTH, WIN_HEIGHT,
				SDL_WINDOW_SHOWN
	);
	dest->active = true;
	dest->renderer = SDL_CreateRenderer(window, -1, 0);
	dest->window = window;
	dest->texture = IMG_LoadTexture(dest->renderer, "resources/quanta.bmp");

	if (dest->texture != NULL)
		printf(BOLDBLUE"Texture"COLOR_RESET" loaded "BOLDGREEN"successfully.\n"COLOR_RESET);

	atexit(SDLU_close);
}

void	SDLU_close(void)
{
	SDL_DestroyWindow(get_display()->window);
	SDL_Quit();
	printf(BOLDBLUE"SDL"COLOR_RESET" exited "BOLDGREEN"successfully.\n");
}

/*
* A function that shall be used to get the display.
* On the first call to this function the function shall initialize
* all the necessary things for the window.
*/
t_display	*get_display(void)
{
	static t_display	display;

	if (display.window == NULL)
		SDLU_start(&display);

	return (&display);
}
