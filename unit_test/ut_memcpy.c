/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:40:08 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:40:10 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_memcpy(char *me, char *ft, char *pt1, char *pt2)
{
	if (strcmp(me, ft) == 0)
		OK;
	else
		FAIL(ft), FAIL(me);
	TEST("Check returns ptr");
	if (strcmp(pt1, pt2) == 0)
		OK;
	else
		FAIL(pt2), FAIL(pt1);
}

void	tabncmp(int *ft, int *me)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (i < 200)
	{
		if (ft[i] != me[i])
			FAIL("int *"), ret = 1, printf("my %d\nyour %d\nindex %d\n", ft[i], me[i], i);
		i++;
	}
	if (ret == 0)
		OK;
}

void	ut_memcpy(void)
{
	char 	ft[100] = {0};
	char 	me[100] = {0};
	int	ftab[200] = {0};
	int	metab[200] = {0};
	void	*pt1;
	void 	*pt2;

	pt1 = NULL;
	pt2 = NULL;
	NAME_UT("Test ft_memcpy :");
	TEST("ft_memcpy(str, 'Un jolie petit test facile', 5)");
	pt1 = memcpy(me, "Un jolie petit test facile", 5);
	pt2 = ft_memcpy(ft, "Un jolie petit test facile", 5);
	check_memcpy(me, ft, pt1, pt2);
	TEST("ft_memcpy(str, 'Un jolie petit test un peu plus dur que le precedent\\n\\n~[[^{#|@#{}}',)");
	pt1 = memcpy(me, "Un jolie petit test un peu plus dur que le precedent\\n\\n~[[^{#|@#{}}',", 10);
	pt2 = ft_memcpy(ft, "Un jolie petit test un peu plus dur que le precedent\\n\\n~[[^{#|@#{}}',", 10);
	check_memcpy(me, ft, pt1, pt2);
	TEST("ft_memcpy(tab, 'Un jolie petit test un peu plus dur que le precedent\\n\\n~[[^{#|@#{}}',)");
	pt1 = memcpy(metab, "Un jolie petit test un peu plus dur que le precedent\\n\\n~[[^{#|@#{}}',", 10);
	pt2 = ft_memcpy(ftab, "Un jolie petit test un peu plus dur que le precedent\\n\\n~[[^{#|@#{}}',", 10);
	tabncmp(pt1, pt2);

}
