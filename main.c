/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agerasym <agerasym@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:52:07 by agerasym          #+#    #+#             */
/*   Updated: 2024/08/11 21:09:17 by agerasym         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int n_columns, int n_rows);

int	ft_result(char *str)
{
	int	result;

	result = 0;
	if (*str == '-')
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			break ;
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (1);
	rush(ft_result(argv[1]), ft_result(argv[2]));
	return (0);
}
