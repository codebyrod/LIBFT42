/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosousa- <rosousa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:16:08 by rosousa-          #+#    #+#             */
/*   Updated: 2025/08/07 22:31:42 by rosousa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <stdio.h>

void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int n);
int		ft_isalpha(int c);
int		ft_isascii(int n);
int		ft_isdigit(int n);
int		ft_isprint(int n);
int		ft_memcmp(const void *str1, const void *str2, size_t num);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strlen(char *str);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *str, int sch_str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*strrchr(const char *str, int c);
int		ft_toupper(int n);
int		ft_lower(int n);

#endif