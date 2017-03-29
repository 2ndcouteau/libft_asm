/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:38:48 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:38:49 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_isalpha(void)
{
	char is[256] = {0};
	char isnt[256] = {0};

	check_is(isalpha, is);
	check_isnt(isalpha, isnt);
	NAME_UT("Test ft_isalpha");
	test_is(ft_isalpha, is);
	test_isnt(ft_isalpha, isnt);
}
