/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:40:21 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:40:22 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_memset(char *me, char *ft, char *pt1, char *pt2)
{
	if (strcmp(me, ft) == 0)
		OK;
	else
		FAIL(ft);
	TEST("Check returns ptr");
	if (strcmp(pt1, pt2) == 0)
		OK;
	else
		FAIL(pt2);
}

void	tabcmp(int *ft, int *me)
{
	int i;

	i = 0;
	while (i < 40)
	{
		if (ft[i] == me[i])
			OK;
		else
			FAIL("int *");
		i++;
	}
}

void	ut_memset(void)
{
	char ft[100] = {0};
	char me[100] = {0};
	void *pt1;
	void *pt2;
	int	ftab[40] = {0};
	int	metab[40] = {0};

	NAME_UT("Test ft_memset :");
	TEST("ft_memset(str, 'C', 50)");
	pt1 = memset(me, 'C', 50);
	pt2 = ft_memset(ft, 'C', 50);
	check_memset(me, ft, pt1, pt2);
	TEST("ft_memset(str, 'F', 89)");
	pt1 = memset(me, 'F', 89);
	pt2 = ft_memset(ft, 'F', 89);
	check_memset(me, ft, pt1, pt2);
	TEST("ft_memset(tab, 227, 32)");
	pt1 = memset(metab, 227, 32);
	pt2 = ft_memset(ftab, 227, 32);
	tabcmp(pt1, pt2);
	TEST("ft_memset(NULL, 227, 32)");
	pt2 = ft_memset(NULL, 227, 32);
	OK;
}
