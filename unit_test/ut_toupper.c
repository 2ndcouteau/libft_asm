/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:42:22 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:42:23 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_toupper(void)
{
	char to[256] = {0};
	char ft[256] = {0};

	check_to(toupper, to);
	check_to(ft_toupper, ft);
	NAME_UT("Test ft_toupper");
	test_to(ft, to);
}
