/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 15:04:03 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/28 16:24:11 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putfloat(float a)
{
	float rem;

	ft_putnbr_fd(a, 1);
	ft_putchar('.');
	ft_putnbr_fd(ABS(a-((int)a)) * 100, 1);
}
