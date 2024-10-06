/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:27:14 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 18:27:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*array;
	size_t			i;

	i = 0;
	array = malloc(size * num);
	while (i < (size * num))
	{
		array[i] = 0;
		i++;
	}
	return ((void *)array);
}

// int	main(void)
// {
// 	int	*ptr;
// 	int	n;

// 	n = 5;
// 	ptr = (int *)ft_calloc(n, sizeof(int));
// 	if (ptr == NULL)
// 	{
// 		printf("Error al asignar memoria.\n");
// 		return (1);
// 	}
// 	// Los elementos del arreglo estarán inicializados a 0
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d ", ptr[i]);
// 	}
// 	free(ptr);
// 	return (0);
// }
