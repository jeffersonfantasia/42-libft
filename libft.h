/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfranchi <jfranchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 21:06:39 by jfranchi          #+#    #+#             */
/*   Updated: 2021/06/07 18:52:08 by jfranchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_memcmp(const void *p_dest, const void *p_src, size_t len);
int		ft_strncmp(const char *str1, const char *str2, size_t len);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *p_dest, const char *p_src, size_t len);
size_t	ft_strlcat(char *p_dest, const char *p_src, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *find, size_t len);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void	*ft_memcpy(void *p_dest, const void *p_src, size_t len);
void	*ft_memccpy(void *p_dest, const void *p_src, int c, size_t len);
void	*ft_memmove(void *p_dest, const void *p_src, size_t len);
void	*ft_calloc(size_t num, size_t len);
void	*ft_memchr(const void *p_str, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif