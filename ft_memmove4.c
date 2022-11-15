/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:58:19 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/12 16:27:28 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	*ft_memmove4(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*pdest;
	char	*psrc;

	i = 0;
	pdest = (unsigned char *)dest; // cast la valeur contenur dans dest et src
	psrc = (unsigned char *)src;

	if (pdest == NULL && psrc == NULL) // protection si les 2 sont nuls
		return (NULL);

	if (psrc < pdest) // si l'adresse de src et plus petite que l'adresse de dest (risque d'overlap si on ne fait pas ca)
	{
		while (n-- > 0) // on remplit de la droite vers la gauche pour ne pas tout modifier dans src
			pdest[n] = psrc[n];
		return (pdest);
	}

	while (i < n) // si l'adresse de dest et + petite (aucun risque d'overlap)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

int		main()
{
	char src[] = "bonjour";
	char src2[] = "bonjour";
	char dest[] = "aurevoir";
	char dest2[] = "aurevoir";

	printf("\n---------  MAN  ---------\n");
	printf("avant\nsrc : %s | dest : %s\n", src, src + 2);

	memmove(src + 2, src, sizeof(char) * 4);

	printf("apres\nsrc : %s | dest : %s\n", src, src + 2);
	
	//				******************

	printf("\n\n---------  MOI  ---------\n");
	printf("avant\nsrc : %s | dest : %s\n", src2, src2 + 2);

	ft_memmove4(src2 + 2, src2, sizeof(char) * 4);

	printf("apres\nsrc : %s | dest : %s\n", src2, src2 + 2);

	return 0;
}