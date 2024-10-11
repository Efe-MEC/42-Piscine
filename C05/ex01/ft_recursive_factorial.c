/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:19:36 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/16 15:03:18 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (0 < nb)
	{
		result = nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
