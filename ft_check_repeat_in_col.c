/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeat_in_col.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 11:37:49 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 17:35:52 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_check_repeat_in_col(char **argv)
{
	int row;
	int col;
	int j;

	col = 0;
	while (col < 9)
	{
		row = 1;
		while (row < 9)
		{
			j = row + 1;
			while (j < 9)
			{
				if ((argv[row][col] == argv[j][col]) && argv[row][col] != '.')
					return (TRUE);
				j++;
			}
			row++;
		}
		col++;
	}
	return (FALSE);
}
