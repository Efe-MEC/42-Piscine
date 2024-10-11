/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:50:25 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/21 14:57:07 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = (int *)malloc(i * sizeof(int));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
