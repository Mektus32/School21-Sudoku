/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_int2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:50:24 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 22:23:18 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_str_to_int2(char **argv, int **ptr2)
{
	int	row;
	int	col;

	row = 1;
	while (row < 10)
	{
		col = 0;
		while (argv[row][col] != '\0')
		{
			if (argv[row][col] >= '1' && argv[row][col] <= '9')
				ptr2[row - 1][col] = (int)argv[row][col] - 48;
			else
				ptr2[row - 1][col] = 0;
			col++;
		}
		row++;
	}
	return (FALSE);
}
