/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:41:13 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:41:16 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_it(char *str1, char *str2)
{
	if (!(strcmp(str1, str2)))
		OK;
	else
		FAIL(str1);
}

void	ut_strcat(void)
{
	char str1[30];

	NAME_UT("Test ft_strcat");
	ft_bzero(str1, 30);
	TEST("ft_strcat(str1, '')"), ft_strcat(str1, "");
	test_it(str1, "");
	TEST("ft_strcat(str1, 'B')"), ft_strcat(str1, "B");
	test_it(str1, "B");
	TEST("ft_strcat(str1, 'onj')"), ft_strcat(str1, "onj");
	test_it(str1, "Bonj");
	TEST("ft_strcat(str1, 'Our')"), ft_strcat(str1, "Our");
	test_it(str1, "BonjOur");
	TEST("ft_strcat return ptr");
	test_it(ft_strcat(str1, ""), "BonjOur");
	TEST("ft_strcat(NULL, 'Our')"), ft_strcat(NULL, "Our");
		OK;
	TEST("ft_strcat('Our', NULL)"), ft_strcat("Our", NULL);
		OK;
	TEST("ft_strcat(NULL, NULL)"), ft_strcat(NULL, NULL);
		OK;
	TEST("ft_strcat(str1, 'aaaaaaaaaaaaaaaaaaaaaaa')"), ft_strcat(str1, "aaaaaaaaaaaaaaaaaaaaaaa");
	test_it(str1, "BonjOuraaaaaaaaaaaaaaaaaaaaaaa");
}
