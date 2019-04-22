/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:06:56 by ojessi            #+#    #+#             */
/*   Updated: 2019/04/22 19:58:00 by ojessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_repeat(int **ptr)
{
	int row_box;
	int col_box;

	row_box = 0;
	while (row_box < 9)
	{
		col_box = 0;
		while (col_box < 9)
		{
			if (ft_check_repeat_in_box(ptr, row_box, col_box))
				return (TRUE);
			col_box += 3;
		}
		row_box += 3;
	}
	return (FALSE);
}

int		main(int argc, char **argv)
{
	int **ptr;
	int	**ptr2;

	ptr = NULL;
	ptr2 = NULL;
	if (argc != 10)
		ERROR;
	if (ft_check_row(argv) || ft_check_repeat_in_row(argv) ||
			ft_check_repeat_in_col(argv))
		ERROR;
	ptr = ft_create_matrix(ptr);
	if (ft_str_to_int(argv, ptr))
		ERROR;
	if (ft_sudoky(ptr) == TRUE)
	{
		if (ft_check_valid(ptr, ptr2, argv))
			ft_print_sudoky(ptr);
		else
			ERROR;
	}
	ERROR;
	return (0);
}
