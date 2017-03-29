/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:42:10 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:42:11 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_tolower(void)
{
	char to[256] = {0};
	char ft[256] = {0};

	check_to(tolower, to);
	check_to(ft_tolower, ft);
	NAME_UT("Test ft_tolower");
	test_to(ft, to);
}
