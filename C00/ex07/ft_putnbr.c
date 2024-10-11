/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:32:13 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/07 14:27:36 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (0 <= nb && nb <= 9)
	{
		ft_putchar(48 + nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		write (1, "2147483648", 10);
	}
	else
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
}
