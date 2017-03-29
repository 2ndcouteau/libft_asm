/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:39:39 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:39:40 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_isdigit(void)
{
	char is[256] = {0};
	char isnt[256] = {0};

	check_is(isdigit, is);
	check_isnt(isdigit, isnt);
	NAME_UT("Test ft_isdigit");
	test_is(ft_isdigit, is);
	test_isnt(ft_isdigit, isnt);
}
