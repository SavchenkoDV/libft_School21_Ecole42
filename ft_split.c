/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_mem(char const *str, char c)
{
	size_t	i;
	char	*w;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if ((w = (char *)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	ft_strlcpy(w, str, i + 1);
	return (w);
}

static char		*ft_trap(char const *s, char c, size_t i)
{
	size_t	wc;
	char	*str;

	str = (char *)s;
	wc = 0;
	while (*str != '\0')
	{
		while (*str == c && *str != '\0')
			str++;
		if (*str != c && *str != '\0')
		{
			wc++;
			if (wc == i && *str != '\0')
				return (ft_mem(str, c));
			while (*(str + 1) != c && *(str + 1) != '\0')
				str++;
		}
		if (*str == '\0')
			break ;
		str++;
	}
	return (NULL);
}

static size_t	ft_wc(char const *s, char c)
{
	size_t	wc;
	char	*str;

	str = (char *)s;
	wc = 0;
	while (*str != '\0')
	{
		while (*str == c && *str != '\0')
			str++;
		if (*str != c && *str != '\0')
		{
			wc++;
			while (*(str + 1) != c && *(str + 1) != '\0')
				str++;
		}
		if (*str == '\0')
			break ;
		str++;
	}
	return (wc);
}

char			**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	wc;
	char	**dm;

	i = 1;
	if (s == NULL)
		return (NULL);
	wc = ft_wc(s, c);
	if ((dm = (char **)malloc(sizeof(char *) * (wc + 1))) == NULL)
		return (NULL);
	while (i < wc + 1)
	{
		if ((dm[i - 1] = ft_trap(s, c, i)) == NULL)
		{
			while (i > 1)
			{
				free(dm[i - 1]);
				i--;
			}
			free(dm);
		}
		i++;
	}
	dm[wc] = NULL;
	return (dm);
}
