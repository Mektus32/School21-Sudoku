/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 18:47:27 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 21:59:51 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		**ft_create_matrix2(int **ptr2)
{
	int	i;

	ptr2 = (int**)malloc(sizeof(int*) * 10);
	ptr2[9] = NULL;
	i = 0;
	while (i < 9)
	{
		ptr2[i] = (int*)malloc(sizeof(int) * 9);
		i++;
	}
	return (ptr2);
}
