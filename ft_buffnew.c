/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:08:17 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/05 13:54:51 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_buff  *ft_buffnew(size_t buffsize, int me)
{
    t_buff *ret;
    
    ret = (t_buff *)ft_memalloc(sizeof(t_buff));
    ret->data = ft_memalloc(buffsize);
    ret->buff_size = buffsize;
    ret->meta = me;
    ret->pointer = ret->data + buffsize;
    return (ret);
}