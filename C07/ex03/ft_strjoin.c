/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehcakir <mehcakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 12:10:09 by mehcakir          #+#    #+#             */
/*   Updated: 2024/07/21 14:57:17 by mehcakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_total_len(char **strings, int size, char *sep)
{
	int	final;
	int	i;
	int	seplen;

	seplen = ft_strlen(sep);
	final = 0;
	i = 0;
	while (i < size)
	{
		final += ft_strlen(strings[i]);
		final += seplen;
		i++;
	}
	final -= seplen;
	return (final);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		count;

	str = (char *)malloc((ft_total_len(strs, size, sep) + 1) * sizeof(char));
	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[count++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size -1)
		{
			str[count++] = sep[j++];
		}
		i++;
	}
	str[count] = '\0';
	return (str);
}
