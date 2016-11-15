/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_newstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czalewsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:11:37 by czalewsk          #+#    #+#             */
/*   Updated: 2016/11/14 18:56:43 by czalewsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lst_newstr(char *str)
{
	if (!str)
		return (NULL);
	return (ft_lstnew(str, (ft_strlen(str) + 1) * sizeof(char)));
}
