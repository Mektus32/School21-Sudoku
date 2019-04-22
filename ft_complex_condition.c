/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex_condition.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 19:18:03 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 20:02:12 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_complex_condition(int **ptr, int row, int col, int digit)
{
	int	row_box;
	int	col_box;

	row_box = row - row % 3;
	col_box = col - col % 3;
	return (ft_row_condition(ptr, row, digit) &&
			ft_col_condition(ptr, col, digit) &&
			ft_box_condition(ptr, row_box, col_box, digit) &&
			ptr[row][col] == 0);
}
