/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_log.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:14:23 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/23 10:55:43 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char *get_message_color(t_log_type t)
{
	static char	*strs[3] = {
		"32",
		"208",
		"196"
	};
	return (strs[t]);
}

void	log_state(char *message, void *src)
{
	ft_putstr("\e[32mLOG\e[0m : ");
	ft_putpntr(src);
	ft_putstr(" : ");
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