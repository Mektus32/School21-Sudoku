/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_empty_cell2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 19:42:29 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 21:57:29 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_empty_cell2(int **ptr2, int *row, int *col)
{
	*row = 0;
	while (*row < 9)
	{
		*col = 0;
		while (*col < 9)
		{
			if (ptr2[*row][*col] == 0)
				return (TRUE);
			(*col)++;
		}
		(*row)++;
	}
	return (FALSE);
}
