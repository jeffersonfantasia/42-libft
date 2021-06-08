/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:37:14 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/08 17:38:59 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**_split_words(char *str, char c)
{
	unsigned int	count_words;
	char			**split_words;

	while (*str)
	{
		if (*str != c)
		{
			while (*str != c && *str)
				str++;
			count_words++;
		}
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

static	void	_char_words(char *str, char *splited_str, size_t len)
{
	while (len--)
	{
		*splited_str = *str;
		splited_str++;
		str++;
	}
}

static	char	**_result_splited(char *s, char c, char **splited, size_t pos)
{
	size_t	count;

	while (*s)
	{
		count = 0;
		if (*s != c)
		{
			while (*s != c && *s)
			{
				s++;
				count++;
			}
			splited[pos] = (char *)ft_calloc((count + 1), sizeof(char));
			if (splited[pos] == NULL)
			{
				_free_all(splited);
				return (NULL);
			}
			_char_words((char *)(s - count), splited[pos], count);
			pos++;
		}
		s++;
	}
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	size_t	pos;

	pos = 0;
	splited = _split_words((char *)s, c);
	splited = _result_splited((char *)s, c, splited, pos);
	return (splited);
}
