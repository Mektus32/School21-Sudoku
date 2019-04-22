/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoky.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:06:13 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 19:59:26 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_sudoky(int **ptr)
{
	int	row;
	int	col;
	int	digit;

	if (!ft_empty_cell(ptr, &row, &col))
		return (TRUE);
	digit = 1;
	while (digit <= 9)
	{
		if (ft_complex_condition(ptr, row, col, digit))
		{
			ptr[row][col] = digit;
			if (ft_sudoky(ptr))
				return (TRUE);
			ptr[row][col] = 0;
		}
		digit++;
	}
	return (FALSE);
}
