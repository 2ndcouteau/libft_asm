/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:40:39 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:40:42 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_putchar(void)
{
	NAME_UT("Test ft_putchar");
	ft_putchar('c');
	ft_putchar('a');
	ft_putchar(' ');
	ft_putchar('a');
	ft_putchar(' ');
	ft_putchar('l');
	ft_putchar('\'');
	ft_putchar('a');
	ft_putchar('i');
	ft_putchar('r');
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar('o');
	ft_putchar('n');
	ft_putchar('\n');
}
