/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:38:15 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:38:17 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_cat(void)
{
	int fd2;

	NAME_UT("Test ft_cat");
	fd2 = open("test.h", O_RDONLY);
	ft_cat(fd2);
	ft_cat(-1);
}
