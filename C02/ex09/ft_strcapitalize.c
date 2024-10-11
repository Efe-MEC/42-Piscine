/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:49:21 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/11 14:53:54 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			if (c == 1)
			{
				str[i] -= 32;
				c = 0;
			}
		}
		else if ('0' <= str[i] && str[i] <= '9')
			c = 0;
		else
			c = 1;
		i++;
	}
	return (str);
}
