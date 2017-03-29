/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:35:22 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 20:07:41 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"

int main(void)
{
	ut_bzero();
	ut_strcat();
	ut_isalpha();
	ut_isdigit();
	ut_isalnum();
	ut_isascii();
	ut_isprint();
	ut_toupper();
	ut_tolower();
	ut_puts();
	ut_strlen();
	ut_memset();
	ut_memcpy();
	ut_strdup();
	ut_cat();
	NAME_TITLE("TEST DES FONCTIONS BONUS");
	ut_putsfd();
	ut_putchar();
	return (0);
}
