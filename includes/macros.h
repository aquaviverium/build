/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: home <home@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 00:04:48 by home              #+#    #+#             */
/*   Updated: 2020/07/17 00:29:16 by home             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MACRO_H
# define MACRO_H

/*
** Can also be replaced with macros.
** Not sure of the benifits and disadvantages,
** of a marco vs enum in this situation.
*/

enum fabric_api
{
	NO_OP		= ('\0'),
	SET_FABRIC	= ('S'),
	GET_FABRIC	= ('G'),
};

# define FAILURE (0)
# define SUCCESS (1)

#endif
