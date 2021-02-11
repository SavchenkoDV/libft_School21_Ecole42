/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*dst;
	size_t	i;
	size_t	size_dst;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	dst = NULL;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	size_dst = ft_strlen(s1) + ft_strlen(s2);
	if ((dst = malloc(sizeof(char) * (size_dst + 1))) == NULL)
		return (NULL);
	while (*str1 != '\0')
		dst[i++] = *str1++;
	while (*str2 != '\0')
		dst[i++] = *str2++;
	dst[i] = '\0';
	return (dst);
}
