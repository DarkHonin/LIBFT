/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   std_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:08:34 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/20 10:11:10 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		std_error(char *message)
{
	ft_putstr("\e[91mSTDERR\e[0m :: ");
	ft_putendl(message);
	return (0);
}

int		warning_error(char *message)
{
	ft_putstr("\e[91mWARNING\e[0m :: ");
	ft_putendl(message);
	return (0);
}