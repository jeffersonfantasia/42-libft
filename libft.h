/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:06:39 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/03 14:41:50 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_memcmp(const void *p_dest, const void *p_src, size_t len);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void	*ft_memcpy(void *p_dest, const void *p_src, size_t len);
void	*ft_memccpy(void *p_dest, const void *p_src, int c, size_t len);
void	*ft_memmove(void *p_dest, const void *p_src, size_t len);
void	*ft_calloc(size_t num, size_t len);
void	*ft_memchr(const void *p_str, int c, size_t len);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *p_dest, const char *p_src, size_t len);
size_t	ft_strlcat(char *p_dest, const char *p_src, size_t len);
char	*ft_strchr(const char *str, int c);

#endif