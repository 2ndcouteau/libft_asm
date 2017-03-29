/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:37:34 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:37:36 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_to(int(*f)(int c), char *str)
{
	int i;
	int e;

	i = 1;
	e = 0;
	while (i < 256)
	{
		str[e] = f(i);
		e++;
		i++;
	}
}

void	test_to(char *ft, char *to)
{
	int ret;

	ret = 0;
	ret = strcmp(ft, to);
	if (ret != 0)
		FAIL(ft), printf("real result = %s\n", to);
	else
		OK;
}
