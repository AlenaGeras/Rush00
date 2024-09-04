/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:44:31 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/11 21:11:11 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_table(int col, int row, int n_columns, int n_rows)
{
	if ((col == 0 || col == n_columns - 1))
	{
		if (row == 0)
			ft_putchar('A');
		else if (row == n_rows - 1)
			ft_putchar('C');
	}
	else if (row == 0 || row == n_rows - 1)
	{
		ft_putchar('B');
	}
	if (row != 0 && row != n_rows - 1)
	{
		if (col == 0 || col == n_columns - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

int	rush(int n_columns, int n_rows)
{
	int	col;
	int	row;

	if (n_columns <= 0 || n_rows <= 0)
	{
		return (1);
	}
	row = 0;
	while (row < n_rows)
	{
		col = 0;
		while (col < n_columns)
		{
			print_table(col, row, n_columns, n_rows);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
	return (0);
}
