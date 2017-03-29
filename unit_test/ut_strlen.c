/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/10 19:41:52 by qrosa             #+#    #+#             */
/*   Updated: 2015/06/10 19:41:56 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

size_t	test_strlen(char *str)
{
	size_t ret1;
	size_t ret2;

	ret1 = 1;
	ret2 = 0;
	ret1 = ft_strlen(str);
	ret2 = strlen(str);
	if (ret1 == ret2)
	{
		OK;
		return (0);
	}
	else
		FAIL(str), printf("your result : %d\nTrue result : %d\n", (int)ret1, (int)ret2);
	return (1);
}

void	ut_strlen(void)
{
	NAME_UT("Test ft_strlen");
	test_strlen("");
	test_strlen("Un test facile");
	test_strlen("Un autre un peu plus dur \n");
	test_strlen("One other _çé_'-(_\"çà\"(\"é'");
	test_strlen("##{{[|`@^@]@^]^#|#~#^@[~@#|^@[@|]@#]715745848}}");
	test_strlen("œœ_çœœ-?.//§%£:;,;!1253£%°+°§/§.§..§/.§.µ£++°%£%££%¨£+°°%");
	test_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
	test_strlen("\n\t\awz\e\r\tgðjofzifojziof\0joefzjfoiejofizzefjz");
	test_strlen("\0");
	test_strlen("fhoazhfijfidhjf jùo gziohfihdsogih fpci fh i	h 	hio ahiah hf 	h 	hi	 jp	hr 	opî	j peu	 ue j u jP uj	 ohI	 SHOh osia	hd ogapug dgdupgu");
	test_strlen("`\\^^@@@\\{[|[|\{@~#~^^|\{#^@0~[##~^^ç#û^~çðæçð@ç~þû@æýð~ðç@#~ð©@ððç~@ý©ð±^æ@æý@ýð#@æâ@æ~çǽð@~©æþð©â@æ±~æ@þýç“ý~çý ðþæ@ {#ð±~@#æ± @æ@çýð Â±@æ@åæç±ấçæ@ÊÂæ±@æç#~ð±ðÂ@æ±}}}}");
	test_strlen("															\0");
	test_strlen("                                                                                                                   \0");
	TEST("ft_strlen('(NULL)')");
	OK;
}
