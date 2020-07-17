/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   API_fabric.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 00:00:59 by home              #+#    #+#             */
/*   Updated: 2020/07/17 03:13:30 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "universe.h"

int		_fabric(int int_code, ...)
{
	static t_fabric *fabric;
	t_fabric		**dest;
	va_list			ap;

	va_start(ap, int_code);
	if (int_code == SET_FABRIC)
		fabric = va_arg(ap, t_fabric *);
	else if (int_code == GET_FABRIC)
	{
		dest = va_arg(ap, t_fabric **);
		*dest = fabric;
	}

	return (SUCCESS);
}

t_fabric	*get_fabric(void)
{
	t_fabric *dest;

	_fabric(GET_FABRIC, &dest);
	if (dest == NULL)
	{
		printf("Error!\n");
	}
	return (dest);
}

void	set_fabric(t_fabric *fabric)
{
	_fabric(SET_FABRIC, fabric);
}
