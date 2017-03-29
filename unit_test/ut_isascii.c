/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:39:21 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:39:23 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_isascii(void)
{
	char is[256] = {0};
	char isnt[256] = {0};

	check_is(isascii, is);
	check_isnt(isascii, isnt);
	NAME_UT("Test ft_isascii");
	test_is(ft_isascii, is);
	test_isnt(ft_isascii, isnt);
}
