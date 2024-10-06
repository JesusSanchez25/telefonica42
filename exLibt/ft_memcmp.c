/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:44:44 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 22:44:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	unsigned char	data1[] = {1, 2, 3, 4};
	unsigned char	data2[] = {1, 2, 3, 5};
	int				result;

	result = ft_memcmp(data1, data2, sizeof(data1));
	if (result == 0)
	{
		printf("Los bloques de memoria son iguales.\n");
	}
	else if (result > 0)
	{
		printf("El bloque de memoria 1 es mayor que el bloque de memoria 2.\n");
	}
	else
	{
		printf("El bloque de memoria 1 es menor que el bloque de memoria 2.\n");
	}
	return (0);
}
