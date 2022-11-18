/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:38:47 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/18 19:01:23 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
        c -= 32;
		return (c);
	}
}

/* int	main(void)
{
	char	testMAN = 'l';
	char	testMOI = 'l';

	printf("*** MAN ***\navant : %d | %c\napres : %d | %c\n\n", testMAN, testMAN, toupper(testMAN), toupper(testMAN));
	printf("*** MOI ***\navant : %d | %c\napres : %d | %c\n\n", testMOI, testMOI, ft_toupper(testMOI), ft_toupper(testMOI));
	return (0);
} */