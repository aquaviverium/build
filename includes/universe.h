/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   universe.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 02:38:32 by home              #+#    #+#             */
/*   Updated: 2020/07/19 00:53:02 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIVERSE_H
# define UNIVERSE_H

# include <stdio.h>

# include "macros.h"

# include "aether.h"
# include "fabric.h"

# include "out.h"

void	aethersynthesis(t_fabric *fabric);

void	next(t_fabric *fabric);

#endif
