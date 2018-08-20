/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bufffill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:40:19 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/20 11:54:51 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  ft_bufffill handles the procedure for filling up a buffer
**  it takes a function responsible for reading from a stream
**  and putting it in the buffer, returning the amount of bytes
**  actually handled.
**
**  The function itself returns 0 if nothing has been read and
**  the second paramater didnt fail.
**
**  Returns -1 if the reading function failed
**
**  Returns > 0 if everything went well
*/

int	ft_bufffill(t_buff *buff, int (*reader)(int, void *, size_t))
{
	log_state("Checking buffer state [FT_BUFFFILL]", &ft_bufffill);
	if (buff->data == NULL)
		buff->data = ft_memalloc(buff->buff_size);
	log_state("Available > [FT_BUFFFILL]", &ft_bufffill);
	log_state(ft_itoa(buff->available), &ft_bufffill);
	if (ft_buffstat(buff) > 0 && ft_buffstat(buff) < (int)buff->buff_size)
		return (ft_buffstat(buff));
	log_state("Buffer state OK [FT_BUFFFILL]", &ft_bufffill);
	log_state("Running read function [FT_BUFFFILL]", &ft_bufffill);
	buff->available = reader(buff->meta, buff->data, buff->buff_size);
	log_state("Available > [FT_BUFFFILL]", &ft_bufffill);
	log_state(ft_itoa(buff->available), &ft_bufffill);
	ft_buffreset(buff);
	return (buff->available);
}
