/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czalewsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 12:10:53 by czalewsk          #+#    #+#             */
/*   Updated: 2016/11/13 12:18:50 by czalewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_pushend(t_list **alst, t_list *new)
{
	t_list		*addr;

	if (!new)
		return ;
	else if (!(*alst))
		*alst = new;
	else
	{
		addr = *alst;
		while (addr->next)
			addr = addr->next;
		addr->next = new;
	}
}
