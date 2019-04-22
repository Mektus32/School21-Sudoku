/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojessi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 15:18:35 by ojessi            #+#    #+#             */
/*   Updated: 2019/02/10 22:19:48 by telanor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define ERROR {write(1, "Error\n", 6); return (0);}

# include <unistd.h>
# include <stdlib.h>

typedef enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

t_bool	ft_check_row(char **argv);
t_bool	ft_check_valid(int **ptr, int **ptr2, char **argv);
t_bool	ft_sudoky(int **ptr);
t_bool	ft_sudoky_second(int **ptr2);
t_bool	ft_empty_cell(int **ptr, int *row, int *col);
t_bool	ft_empty_cell2(int **ptr2, int *row, int *col);
t_bool	ft_complex_condition(int **ptr, int row, int col, int digit);
t_bool	ft_complex_condition2(int **ptr2, int row, int col, int digit);
t_bool	ft_comparison_matrix(int **ptr, int **ptr2);
t_bool	ft_row_condition(int **ptr, int row, int digit);
t_bool	ft_row_condition2(int **ptr2, int row, int digit);
t_bool	ft_col_condition(int **ptr, int row, int digit);
t_bool	ft_col_condition2(int **ptr2, int row, int digit);
t_bool	ft_box_condition(int **ptr, int row_box, int col_box, int digit);
t_bool	ft_box_condition2(int **ptr2, int row_box, int col_box, int digit);
t_bool	ft_check_repeat_in_row(char **argv);
t_bool	ft_check_repeat_in_col(char **argv);
t_bool	ft_check_repeat_in_box(int **ptr, int row_box, int col_box);
int		ft_str_to_int(char **argv, int **ptr);
int		ft_str_to_int2(char **argv, int **ptr2);
void	ft_print_sudoky(int **ptr);
void	ft_print_sudoky2(int **ptr);
int		**ft_create_matrix(int **ptr);
int		**ft_create_matrix2(int **ptr2);

#endif
