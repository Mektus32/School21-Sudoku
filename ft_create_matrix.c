/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 17:55:09 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 20:56:48 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		**ft_create_matrix(int **ptr)
{
	int i;

	ptr = (int**)malloc(sizeof(int*) * 10);
	ptr[9] = NULL;
	i = 0;
	while (i < 9)
	{
		ptr[i] = (int*)malloc(sizeof(int) * 9);
		i++;
	}
	return (ptr);
}
