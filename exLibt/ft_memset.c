/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:20:49 by jesusanc          #+#    #+#             */
/*   Updated: 2024/10/06 17:21:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, unsigned long n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>

int	main(void) {
	int array[5];
	ft_memset(array, 0, sizeof(array)); // Llena el array con ceros (0)

	for (int i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return (0);
} */
