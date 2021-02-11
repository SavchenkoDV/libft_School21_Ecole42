/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	s_needle;

	i = 0;
	s_needle = ft_strlen(needle);
	if (s_needle == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (len - i < s_needle)
			return (NULL);
		if (ft_strncmp(needle, &haystack[i], s_needle) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
