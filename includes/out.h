/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   out.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 03:05:42 by home              #+#    #+#             */
/*   Updated: 2020/07/21 19:52:00 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUT_H
# define OUT_H

# include <stdbool.h>
# include <unistd.h>

# include <SDL2/SDL.h>
# include <SDL_image.h>

# include "color.h"

# define WIN_TITLE "HADEAN"

# define WIN_WIDTH  (1000)
# define WIN_HEIGHT (1000)

# define WIN_POS_X (2000)
# define WIN_POS_Y (50)

# define TILE_SIZE (100)

typedef struct	s_display
{
	bool			active;
	SDL_Window		*window;
	SDL_Renderer	*renderer;
	SDL_Texture		*texture;
}				t_display;

t_display	*get_display(void);

void		SDLU_start(t_display *dest);
void		SDLU_close(void);

void		process_user_input(void);

void		ctoRGB(int color, int *r, int *g, int *b);

// void		set_color(int val, int *r, int *g, int *b);

void		out(void);

#endif
