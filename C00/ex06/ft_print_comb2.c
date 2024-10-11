/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:16:01 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/07 14:25:41 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_write(int a, int b, int end)
{
	ft_putchar(48 + a / 10);
	ft_putchar(48 + a % 10);
	ft_putchar(' ');
	ft_putchar(48 + b / 10);
	ft_putchar(48 + b % 10);
	if (end == 0)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	end;

	a = 0;
	end = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
			{
				end = 1;
			}
			ft_write(a, b, end);
			b++;
		}
		a++;
	}
}
