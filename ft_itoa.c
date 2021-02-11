/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 12:00:00 by buthor            #+#    #+#             */
/*   Updated: 2020/14/11 23:00:00 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_dst(int nb, int i)
{
	char *nbr;

	if (nb >= 0)
	{
		if ((nbr = (char *)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
	}
	else
	{
		if ((nbr = (char *)malloc(sizeof(char) * (i + 2))) == NULL)
			return (NULL);
	}
	return (nbr);
}

static char	*ft_rec(char *nbr, int nb, int i)
{
	if (nb >= 0)
	{
		nbr[i] = '\0';
		while (i)
		{
			nbr[i - 1] = (char)(nb % 10 + '0');
			nb = nb / 10;
			i--;
		}
	}
	else
	{
		nbr[0] = '-';
		nbr[i + 1] = '\0';
		while (i > 0)
		{
			nbr[i] = (char)((nb % 10) * -1 + '0');
			nb = nb / 10;
			i--;
		}
	}
	return (nbr);
}

char		*ft_itoa(int n)
{
	int		i;
	int		nb;
	char	*nbr;

	i = 0;
	nb = n;
	if (n == 0)
		i = 1;
	while (n)
	{
		n = n / 10;
		i++;
	}
	if ((nbr = ft_dst(nb, i)) == NULL)
		return (NULL);
	nbr = ft_rec(nbr, nb, i);
	return (nbr);
}
