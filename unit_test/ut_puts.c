/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:40:53 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:44:35 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ut_putsfd(void)
{
	int		fd;
	int 	ret1;
	int 	ret2;
	char	*str = "Coco tutu toto";

	NAME_UT("Test ft_putsfd");
	fd = open("sandbox", O_RDWR);
	ret1 = ft_putsfd(1, "Voila un petit test easy");
	ret2 = ft_putsfd(1, str);
	ft_putsfd(1, "Encore un autre test\n");
	ft_putsfd(fd, "Sa a l'air de fonctionner\n");
	ft_putsfd(1, NULL);
	ft_putsfd(-1, NULL);
	ft_putsfd(-1, "dsofkosdk");
	if (ret1 < 0 || ret2 < 0)
		FAIL("Bad return (negative value)");
}

void	ut_putserr(void)
{
	int 	ret1;
	int 	ret2;
	char	*str = "Coco tutu toto";

	NAME_UT("Test ft_putserr");
	ret1 = ft_puts("Voila un petit test easy");
	ret2 = ft_puts(str);
	ft_puts("Encore un autre test\n");
	ft_puts("Sa a l'air de fonctionner\n");
	ft_puts(NULL);
	if (ret1 < 0 || ret2 < 0)
		FAIL("Bad return (negative value)");
}

void	ut_puts(void)
{
	int 	ret1;
	int 	ret2;
	char	*str = "Coco tutu toto";

	NAME_UT("Test ft_puts");
	ret1 = ft_puts("Voila un petit test easy");
	ret2 = ft_puts(str);
	ft_puts("Encore un autre test\n");
	ft_puts("Sa a l'air de fonctionner\n");
	ft_puts(NULL);
	if (ret1 < 0 || ret2 < 0)
		FAIL("Bad return (negative value)");
}
