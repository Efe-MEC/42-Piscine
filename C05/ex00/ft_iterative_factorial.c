/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:12:27 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/16 15:03:13 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (0 < nb)
	{
		result *= nb;
		nb--;
	}
	while (nb < 0)
	{
		return (0);
	}
	return (result);
}
