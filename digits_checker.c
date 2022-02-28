/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 21:01:30 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/02/28 21:49:35 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_dgts_check2(char **str, int i, int j)
{
	while (str[i][j])
	{
		if (str[i][j] == '-' || str[i][j] == '+')
		{
			if ((str[i][j + 1] >= 48 && str[i][j + 1] <= 57))
				j++;
			else if ((str[i][j + 1] < 48 && str[i][j + 1] < 57))
			{
				write(1, "ERROR", 5);
				return (0);
			}
		}
		if (str[i][j] < '0' || str[i][j] > '9')
		{
			write(1, "ERROR", 5);
			return (0);
		}
		j++;
	}
	return (1);
}

int	ft_dgts_check(char **str)
{
	int	i;

	i = 1;
	while (str[i])
	{
		if (!ft_dgts_check2(str, i, 0))
			return (0);
		i++;
	}
	return (1);
}
