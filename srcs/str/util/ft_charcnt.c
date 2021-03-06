/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:39:23 by wgourley          #+#    #+#             */
/*   Updated: 2018/09/05 12:39:23 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_charcnt(char *str, char i)
{
	size_t l;
	size_t c;

	l = 0;
	c = 0;
	while (str[l])
	{
		if (str[l] == i)
			c++;
		l++;
	}
	return (c);
}