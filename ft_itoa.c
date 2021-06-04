/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:17:45 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/04 20:34:13 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	_count_int(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static	void	_convert_to_char(char *str, int n, int len, int sign)
{
	str[len] = '\0';
	while (len--)
	{
		str[len] = ((n % 10) + '0');
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	if (n == -2147483648)
		return ("-2147483648");
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
		len = _count_int(n) + 1;
	}
	else
		len = _count_int(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	_convert_to_char(str, n, len, sign);
	return (str);
}
