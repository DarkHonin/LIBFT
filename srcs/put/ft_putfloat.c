/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 15:04:03 by wgourley          #+#    #+#             */
/*   Updated: 2018/08/29 12:18:08 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putfloat(float a)
{
	float rem;

	ft_putnbr_fd(a, 1);
	ft_putchar('.');
	rem = a-((int)a);
	ft_putnbr_fd(ABS(a) * 100, 1);
}
