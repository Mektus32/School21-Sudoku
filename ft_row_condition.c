/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_row_condition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 19:02:44 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 20:05:21 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_row_condition(int **ptr, int row, int digit)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (ptr[row][col] == digit)
			return (FALSE);
		col++;
	}
	return (TRUE);
}
