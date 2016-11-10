/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czalewsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:45:34 by czalewsk          #+#    #+#             */
/*   Updated: 2016/11/10 18:54:41 by czalewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_len_word(const char *s, char c)
{
	size_t	n;

	n = 0;
	while (s[n] && s[n] != c)
		n++;
	return (n);
}

static	int	ft_split_nb(const char *s, char c)
{
	size_t	n;
	size_t	i;

	i = 0;
	n = 0;
	while (i <= ft_strlen(s))
	{
		if (i == 0 && s[i] == c)
			n++;
		else if (i != 0 && s[i] != c && s[i - 1] == c)
			n++;
		i++;
	}
	return (n);
}

#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**split;
	size_t	n;
	size_t	i;
	size_t	u;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	if (!(split = (char**)malloc(ft_split_nb(s, c) * sizeof(char**))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			u = 0;
			split[n] =(char*)malloc(ft_len_word(&(s[i]), c) * sizeof(char));
			while (s[i] != c && s[i])
				split[n][u++] = s[i++];
			split[n++][u++] = '\0';
		}
		i++;
	}
	split[n] = NULL;
	return (split);
}

int		main(void)
{
	size_t	i;
	char **split;
	char str[] = "0 0 0 0 0 0 0 0 0";
	char c = ' ';
	size_t	n;

	n = 0;
	split = ft_strsplit(str, c);
	i = 0;
	while (split[i])
	{
		printf("%zu=%s\n", i, (split[i]));
		i++;
	}
	return (0);
}
