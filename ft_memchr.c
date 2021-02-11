/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*trap;

	i = 0;
	trap = (unsigned char *)s;
	while (i < n)
	{
		if (trap[i] == (unsigned char)c)
			return (&trap[i]);
		i++;
	}
	return (NULL);
}
