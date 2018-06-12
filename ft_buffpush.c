/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 13:55:40 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/12 10:14:08 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_buffpush(t_buff *buff, void *data, size_t size)
{
	void	*hold;

	hold = ft_memalloc(buff->buff_size + size);
	ft_memcpy(hold, buff->data, buff->buff_size);
	ft_memcpy(hold + buff->buff_size, data, size);
	free(buff->data);
	buff->data = hold;
	buff->buff_size += size;
}
