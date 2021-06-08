/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:37:14 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/08 18:20:50 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**_split_words(char *str, char c)
{
	unsigned int	count_words;
	char			**split_words;

	count_words = 0;
	while (*str)
	{
		if (*str != c)
		{
			while (*str != c && *str)
				str++;
			count_words++;
		}
		if (*str)
			str++;
	}
	split_words = (char **)ft_calloc(count_words + 1, sizeof(char *));
	if (split_words == NULL)
		return (NULL);
	return (split_words);
}

static	void	_free_all(char **split)
{
	size_t	pos;

	pos = 0;
	while (split[pos])
	{
		free(split[pos]);
		pos++;
	}
	free(split);
}

static	void	_char_words(char *dest, char *src, size_t len)
{
	while (len--)
	{
		*dest = *src;
		dest++;
		src++;
	}
}

static	char	**_result_splited(char *s, char c, char **splited)
{
	size_t	count[2];

	count[1] = 0;
	while (*s)
	{
		if (*s != c)
		{
			count[0] = 0;
			while (*s != c && *s)
			{
				s++;
				count[0]++;
			}
			splited[count[1]] = (char *)ft_calloc((count[0] + 1), sizeof(char));
			if (splited[count[1]] == NULL)
			{
				_free_all(splited);
				return (NULL);
			}
			_char_words(splited[count[1]++], (s - count[0]), count[0]);
		}
		if (*s)
			s++;
	}
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;

	splited = _split_words((char *)s, c);
	if (splited == NULL)
		return (NULL);
	splited = _result_splited((char *)s, c, splited);
	if (splited == NULL)
	{
		free(splited);
		return (NULL);
	}
	return (splited);
}
