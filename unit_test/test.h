/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:35:52 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 20:08:39 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TEST_H
# define TEST_H
# include "libfts.h"
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>
# define CYAN printf("\e[36m")
# define RED printf("\e[0;31m")
# define GREEN printf("\e[32m")
# define ORANG printf("\e[33m")
# define NC printf("\e[0m")
# define OK GREEN, printf("	OK\n"), NC
# define FAIL(x) RED, printf("	FAIL: "), printf("result: %s\n", x), NC
# define FAILIS(x) RED, printf("	FAILIS: "), printf("result: %d\n", x), NC
# define NAME_UT(x) CYAN, printf("\n%s	:\n", x), NC
# define NAME_TITLE(x) RED, printf("\n%s	:\n", x), NC
# define TEST(x)	ORANG, printf("%s	: ", x), NC

/*
** test IS framework
*/

void	check_is(int(*f)(int c), char *str);
void	check_isnt(int(*f)(int c), char *str);
void	test_is(int(*f)(int c), char *str);
void	test_isnt(int(*f)(int c), char *str);


/*
** test to framework
*/

void	test_to(char *ft, char *to);
void	check_to(int(*f)(int c), char *str);


/*
** TEST
*/

void	ut_bzero(void);
void	ut_strcat(void);
void	ut_isalpha(void);
void	ut_isdigit(void);
void	ut_isalnum(void);
void	ut_isascii(void);
void	ut_isaprint(void);
void	ut_put(void);
void	ut_toupper(void);
void	ut_tolower(void);
void	ut_strlen(void);
void	ut_memset(void);
void	ut_memcpy(void);
void	ut_puts(void);
void	ut_strdup(void);
void	ut_cat(void);
void	ut_isprint(void);

/*
** BONUS
*/

void	ut_putchar(void);
void	ut_putsfd(void);
#endif
