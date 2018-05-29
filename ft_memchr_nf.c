/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:03:45 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/23 17:10:52 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr_nf(const void *hay, int (*f)(int), size_t len)
{
	size_t			index;
	unsigned char	*in;

	in = (unsigned char *)hay;
	index = 0;
	while (index < len)
	{
		if (!f((int)in[index]))
			return ((void *)hay + index);
		index++;
	}
	return ((void *)NULL);
}
