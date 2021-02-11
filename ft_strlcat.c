/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t x;

	i = ft_strlen(dst);
	j = dstsize - i;
	x = 0;
	if (dstsize < i)
		return (ft_strlen(src) + dstsize);
	while (j > 1 && src[x] != '\0')
	{
		dst[i + x] = src[x];
		x++;
		j--;
	}
	dst[i + x] = '\0';
	return (i + ft_strlen(src));
}
