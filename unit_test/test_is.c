/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:37:14 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:37:19 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_is(int(*f)(int c), char *str)
{
	int i;
	int e;

	i = 1;
	e = 0;
	while (i < 256)
	{
		f(i) ? (str[e] = i), e++ : 0;
		i++;
	}
}

void	check_isnt(int(*f)(int c), char *str)
{
	int i;
	int e;

	i = 1;
	e = 0;
	while (i < 256)
	{
		f(i) ? 0 : (str[e] = i), e++;
		i++;
	}
}

void	test_is(int(*f)(int c), char *str)
{
	int i;
	int ret;
	int foo;

	i = 0;
	ret = 0;
	foo = 0;
	while (str[i])
	{
		ret = f(str[i]);
		if (ret == 0)
			FAILIS(str[i]), printf("return = %d\n", (f(str[i]))), foo = 1;
		i++;
	}
	if (!foo)
		OK;
}

void	test_isnt(int(*f)(int c), char *str)
{
	int i;
	int ret;
	int foo;

	i = 0;
	ret = 1;
	foo = 0;
	while (str[i])
	{
		ret = f(str[i]);
		if (ret == 1)
			FAILIS(str[i]), printf("return = %d\n", (f(str[i]))), foo = 1;
		i++;
	}
	if (!foo)
		OK;
}
