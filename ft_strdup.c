/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:33:43 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/22 12:03:31 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    size_t	i;
	char	*ps;
	size_t	len;

	len = ft_strlen(s);
	ps = malloc(sizeof(ps) * len - 1);
	if (!ps)
		return (NULL);
	while (i < len)
	{
		ps[i]= s[i];
		i++;
	}
	ps[i] = '\0';
	return (ps);

}

/* int	main(void)
{
	char	test[]= "bonjour";

	//if (ft_strdup(test))
	{
		printf("GG : %s",ft_strdup(test));
	}

	return (0);
	
} */