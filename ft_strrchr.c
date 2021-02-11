/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	size_t	i;

	i = ft_strlen(s);
	src = (char *)s;
	while (i != 0)
	{
		if (src[i] == (char)c)
			return (&src[i]);
		i--;
	}
	if (src[i] == (char)c)
		return (&src[i]);
	return (NULL);
}
