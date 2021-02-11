/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*dst;
	char			*ns;
	size_t			size_ns;

	i = 0;
	j = 0;
	dst = NULL;
	ns = (char *)s;
	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	while (i < (size_t)start)
		i++;
	size_ns = ft_strlen(&ns[i]);
	if (len > size_ns)
		len = size_ns;
	if ((dst = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (j < len && j < size_ns)
		dst[j++] = ns[i++];
	dst[j] = '\0';
	return (dst);
}
