/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpntr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:17:27 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/20 12:42:35 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putpntr(void *pntr)
{
	unsigned long aka;

	aka = (unsigned long)pntr;
	ft_putlong(aka);
}