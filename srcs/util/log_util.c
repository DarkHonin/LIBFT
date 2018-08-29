/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 20:31:04 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/29 20:31:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*get_message_color(t_log_type t)
{
	static char	*strs[] = {
		"32",
		"208",
		"196",
		"33"
	};
	return (strs[t]);
}

int		get_message_enabled(t_log_type t)
{
	static	int		states[] =	{
		0,
		1,
		1,
		0
	};

	return (states[t]);
}

char	*get_message_text(t_log_type t)
{
	static char *text[] = {"LOG", "WARNING", "ERROR", "INFO"};

	return (text[t]);
}