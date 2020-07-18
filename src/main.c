/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 02:31:10 by home              #+#    #+#             */
/*   Updated: 2020/07/18 01:37:33 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "universe.h"

int	main(void)
{
	t_fabric fabric;

	set_fabric(&fabric);
	aethersynthesis(&fabric);
	while (get_display()->active == true)
	{
		out();
	}
	return (0);
}
