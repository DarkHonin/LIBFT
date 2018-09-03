/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 15:04:03 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/31 19:00:32 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putfloat(float a)
{
	float rem;

	if (a < 0 && a > -1)
		ft_putchar('-');
	ft_putnbr_fd(a, 1);
	ft_putchar('.');
	rem = a-((int)a);
	ft_putnbr_fd(ABS(rem) * 100, 1);
}
