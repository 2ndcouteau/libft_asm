/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:37:51 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:37:55 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_bzero(void)
{
	char test[] = "Voila un jolie test";
	char test2[] = "Voila un jolie test";
	void *pt;
	NAME_UT("Test ft_bzero");
	TEST("ft_bzero(str, 5)"), ft_bzero(test, 5);
	if ((!(*test)) && (!(strcmp(test + 5, " un jolie test"))))
		OK;
	else
		FAIL(test);
	TEST("ft_bzero(str, 0)"), ft_bzero(test2, 0);
	if (test2[0] == 'V')
		OK;
	else
		FAIL(test2);
	TEST("ft_bzero(NULL, 5)"), ft_bzero(NULL, 5);
	OK;
	pt = test;
	ft_bzero(test, 7);
	TEST("ft_bzero return ptr");
	if (pt == test)
		OK;
	else
		FAIL("Bad return ptr");
}
