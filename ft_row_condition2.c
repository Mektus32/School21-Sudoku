/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_row_condition2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 19:40:59 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 21:58:09 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_row_condition2(int **ptr2, int row, int digit)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (ptr2[row][col] == digit)
			return (FALSE);
		col++;
	}
	return (TRUE);
}
