/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fabric.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:38:32 by home              #+#    #+#             */
/*   Updated: 2020/07/18 01:33:34 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FABRIC_H
# define FABRIC_H

# include "aether.h"

typedef	struct	spacetime
{
	t_aether	**g0;
	t_aether	**g1;

	t_aether	**grid;
}				t_fabric;

void		set_fabric(t_fabric *fabric);
t_fabric	*get_fabric(void);
#endif
