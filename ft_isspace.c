/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 02:17:50 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 02:18:06 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calc.h"

int	ft_isspace(int c)
{
	if ((c == ' ' || c == '\t' || c == '\v' || c == '\n' || c == '\f'
			|| c == '\r'))
		return (1);
	return (0);
}
