/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:38:32 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:38:34 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_isalnum(void)
{
	char is[256] = {0};
	char isnt[256] = {0};

	check_is(isalnum, is);
	check_isnt(isalnum, isnt);
	NAME_UT("Test ft_isalnum");
	test_is(ft_isalnum, is);
	test_isnt(ft_isalnum, isnt);
}
