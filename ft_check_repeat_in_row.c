/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeat_in_row.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:03:20 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 17:36:12 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_check_repeat_in_row(char **argv)
{
	int row;
	int col;
	int j;

	row = 1;
	while (row < 10)
	{
		col = 0;
		while (col < 8)
		{
			j = col + 1;
			while (j < 9)
			{
				if ((argv[row][col] == argv[row][j]) && argv[row][col] != '.')
					return (TRUE);
				j++;
			}
			col++;
		}
		row++;
	}
	return (FALSE);
}
