/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeat_in_box.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 12:23:35 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 18:40:52 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_check_repeat_in_box(int **ptr, int row_box, int col_box)
{
	int row;
	int col;
	int digit;
	int k;

	digit = 0;
	while (++digit <= 9)
	{
		k = 0;
		row = 0;
		while (row < 3)
		{
			col = 0;
			while (col < 3)
			{
				if (ptr[row + row_box][col + col_box] == digit)
					k++;
				if (k == 2)
					return (TRUE);
				col++;
			}
			row++;
		}
	}
	return (FALSE);
}
