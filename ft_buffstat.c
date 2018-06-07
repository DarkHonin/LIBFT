/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffstat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:35:10 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/07 13:20:58 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  ft_buffstat returns the amount of bytes available
**  in the buffer
*/

size_t	ft_buffstat(t_buff *e)
{
	return (e->buff_size - (e->pointer - e->data));
}
