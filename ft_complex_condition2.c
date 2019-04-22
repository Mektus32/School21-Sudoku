/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_condition2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 19:47:00 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 21:57:50 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_complex_condition2(int **ptr2, int row, int col, int digit)
{
	int row_box;
	int col_box;

	row_box = row - row % 3;
	col_box = col - col % 3;
	return (ft_row_condition2(ptr2, row, digit) &&
			ft_col_condition2(ptr2, col, digit) &&
			ft_box_condition2(ptr2, row_box, col_box, digit) &&
			ptr2[row][col] == 0);
}
