/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czalewsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:43:54 by czalewsk          #+#    #+#             */
/*   Updated: 2016/11/12 12:01:07 by czalewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	int cpy;
	int i;
	char *nb;

	i = 1;
	cpy = n;
	if (cpy < 0)
		i++;
	while (!(cpy > (-10) && cpy < 10))
	{
		cpy /= 10;
		i++;
	}
	if (!(nb = ft_strnew(i)))
		return (NULL);
	if (n < 0)
	{
		nb[0] = '-';
		nb[--i] = -(n % 10) + 48;
		n /= 10;
	}
	nb[--i] = ABS(n % 10) + 48;
	while (n /= 10 && ABS(n) >= 10)
		nb[--i] = ABS(n % 10) + 48;
	return (nb);
}

int		main(void)
{
	int		i;
	int		n[] = {-2147483647 -1, 7894, -54, -1, -0};

	i = 0;
	while (i <= 4)
	{
		printf("int = %i | itoa = %s\n", n[i], ft_itoa(n[i]));
		i++;
	}
	return (0);
}
