/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:17:45 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/07 17:32:59 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	_count_int(long n, int sign)
{
	int	i;

	i = 1;
	if (sign == -1)
		i++;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	void	_convert_to_char(char *str, long n, int len, int sign)
{
	while (len > 0)
	{
		if (len == 1 && sign == -1)
			str[0] = '-';
		else
			str[len - 1] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	long	number;
	int		len;
	int		sign;
	char	*str;

	sign = 1;
	number = n;
	if (number < 0)
	{
		sign = -1;
		number = sign * number;
	}
	len = _count_int(number, sign);
	str = (char *)ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	_convert_to_char(str, number, len, sign);
	return (str);
}
