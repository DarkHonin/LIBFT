/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_log.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:14:23 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/20 10:20:23 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	log_state(char *message, void *src)
{
	ft_putstr("\e[32mLOG\e[0m : ");
	ft_putpntr(src);
	ft_putstr(" : ");
	ft_putendl(message);
}