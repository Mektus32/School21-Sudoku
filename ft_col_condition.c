/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_col_condition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 19:04:35 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 19:58:32 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_col_condition(int **ptr, int col, int digit)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (ptr[row][col] == digit)
			return (FALSE);
		row++;
	}
	return (TRUE);
}
