/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_spaces(const char *s)
{
	int i;

	i = 0;
	while (s[i] == '\t' || s[i] == '\n' || s[i] == '\f' || s[i] ==
	'\r' || s[i] == '\v' || 32 == s[i])
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int i;
	int sign;
	int nb;

	i = ft_spaces(str);
	sign = 1;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i + 1] == 43 || str[i + 1] == 45)
			return (0);
		if (str[i] == 45)
			sign = sign * -1;
		i++;
	}
	nb = str[i] - '0';
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (str[i + 1] >= 48 && str[i + 1] <= 57)
			nb = nb * 10 + (str[i + 1] - '0');
		else
			return (nb * sign);
		i++;
	}
	return (0);
}
