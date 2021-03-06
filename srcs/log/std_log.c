/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_log.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:14:23 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/29 20:34:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>



void	log_state(t_log_type t, char *message, void *src)
{
	if (!get_message_enabled(t))
		return ;
	log_open(t, get_message_text(t), src);
	ft_putendl(message);
}

void	log_open(t_log_type type, char *flag, void *src)
{
	ft_putstr("\e[");
	ft_putstr(get_message_color(type));
	ft_putstr("m");
	ft_putstr(flag);
	ft_putstr("\e[0m : ");
	ft_putpntr(src);
	ft_putstr(" : ");
}

void	log_close(char *fn_name)
{
	ft_putstr("\t");
	ft_putendl(fn_name);
}