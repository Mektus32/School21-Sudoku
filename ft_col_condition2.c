/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_condition2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 19:49:26 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 21:58:22 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_col_condition2(int **ptr2, int col, int digit)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (ptr2[row][col] == digit)
			return (FALSE);
		row++;
	}
	return (TRUE);
}
