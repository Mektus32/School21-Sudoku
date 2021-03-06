/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:56:24 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 17:35:32 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool		ft_check_row(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		if (j != 9)
			return (TRUE);
		i++;
	}
	return (FALSE);
}
