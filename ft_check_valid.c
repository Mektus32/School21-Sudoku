/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telanor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 19:07:58 by telanor           #+#    #+#             */
/*   Updated: 2019/02/10 22:03:07 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_bool	ft_check_valid(int **ptr, int **ptr2, char **argv)
{
	ptr2 = ft_create_matrix2(ptr2);
	ft_str_to_int2(argv, ptr2);
	ft_sudoky_second(ptr2);
	if (ft_comparison_matrix(ptr, ptr2))
		return (FALSE);
	return (TRUE);
}
