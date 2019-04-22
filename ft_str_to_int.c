/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:32:04 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 22:21:57 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_str_to_int(char **argv, int **ptr)
{
	int row;
	int col;

	row = 1;
	while (row < 10)
	{
		col = 0;
		while (argv[row][col] != '\0')
		{
			if (argv[row][col] >= '1' && argv[row][col] <= '9')
				ptr[row - 1][col] = (int)argv[row][col] - 48;
			else if (argv[row][col] == '.')
				ptr[row - 1][col] = 0;
			else
				return (TRUE);
			col++;
		}
		row++;
	}
	return (FALSE);
}
