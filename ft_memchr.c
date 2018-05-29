/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 20:47:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 13:36:15 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *hay, int needle, size_t len)
{
	size_t			index;
	unsigned char	*in;

	in = (unsigned char *)hay;
	index = 0;
	while (index < len)
	{
		if (in[index] == (unsigned char)needle)
			return ((void *)hay + index);
		index++;
	}
	return ((void *)NULL);
}
