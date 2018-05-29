/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 19:43:19 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/26 13:00:09 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int limchar, size_t maxchar)
{
	unsigned char	*srcc;
	unsigned char	*dess;
	unsigned char	lim;
	size_t			index;

	index = 0;
	srcc = (unsigned char *)src;
	dess = (unsigned char *)dest;
	lim = (unsigned char)limchar;
	while (index < maxchar)
	{
		dess[index] = srcc[index];
		if (srcc[index] == lim)
		{
			return (dest + index + 1);
			break ;
		}
		index++;
	}
	return (NULL);
}
