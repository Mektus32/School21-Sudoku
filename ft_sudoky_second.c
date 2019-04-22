/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoky_second.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 17:54:59 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 21:56:58 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_sudoky_second(int **ptr2)
{
	int	row;
	int	col;
	int	digit;

	if (!ft_empty_cell2(ptr2, &row, &col))
		return (TRUE);
	digit = 9;
	while (digit >= 1)
	{
		if (ft_complex_condition2(ptr2, row, col, digit))
		{
			ptr2[row][col] = digit;
			if (ft_sudoky_second(ptr2))
				return (TRUE);
			ptr2[row][col] = 0;
		}
		digit--;
	}
	return (FALSE);
}
