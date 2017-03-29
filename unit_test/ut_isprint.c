/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:39:52 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:39:53 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_isprint(void)
{
	char is[256] = {0};
	char isnt[256] = {0};

	check_is(isprint, is);
	check_isnt(isprint, isnt);
	NAME_UT("Test ft_isprint");
	test_is(ft_isprint, is);
	test_isnt(ft_isprint, isnt);
}
