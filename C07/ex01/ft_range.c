/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 13:03:49 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/21 15:16:43 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	result = (int *)malloc(i * sizeof(int));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
