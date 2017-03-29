/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:41:34 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:41:36 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_strdup(void)
{
	char str1[] = "un petit test, hope that work";
	char *str2;

	NAME_UT("Test ft_strdup");
	str2 = NULL;
	str2 = ft_strdup(str1);
	if (!(strcmp(str2, str1)))
		OK;
	else
		FAIL("First test, loooser !");
	str1[2] = 'o';
	if ((strcmp(str2, str1)))
		OK;
	else
		FAIL("You srx ? You just return the *s ptr idiot !!!");
	str2 = ft_strdup(NULL);
	if (!(str2))
		OK;
	else
		FAIL("You strdup a NULL str ??");
}
