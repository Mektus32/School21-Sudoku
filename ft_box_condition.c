/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_box_condition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 21:17:08 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 21:19:43 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_box_condition(int **ptr, int box_row, int box_col, int digit)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (ptr[row + box_row][col + box_col] == digit)
				return (FALSE);
			col++;
		}
		row++;
	}
	return (TRUE);
}
