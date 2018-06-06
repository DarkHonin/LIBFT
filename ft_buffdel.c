/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:12:07 by wgourley          #+#    #+#             */
/*   Updated: 2018/06/06 17:02:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void    ft_buffdel(t_buff *buff)
{
    free(buff->data);
    buff->data = NULL;
    buff->pointer = NULL;
    free(buff);
    buff = NULL;
}