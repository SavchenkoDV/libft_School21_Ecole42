/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if ((res = (char *)malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	res[i] = '\0';
	while (i)
	{
		res[i - 1] = f((unsigned int)i - 1, (char)s[i - 1]);
		i--;
	}
	return (res);
}
