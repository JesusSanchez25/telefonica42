/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:56:51 by marvin            #+#    #+#             */
/*   Updated: 2024/10/12 12:56:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_src;
	char	*tmp_dst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tmp_src = (char *)src;
	tmp_dst = (char *)dst;
	i = 0;
	if (tmp_dst > tmp_src)
	{
		while (len-- > 0)
			tmp_dst[len] = tmp_src[len];
	}
	else
	{
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (tmp_dst);
}

// int	main(void)
// {
// 	char	src[] = "Hello, world!";
// 	char	*dest;
// 	char	*destination;

// 	destination = ft_memmove(src + 3, src, strlen(src) + 1);
// 	printf("Destination: %s\n", src);
// 	// if (src != ft_memmove(src, dest, 8))
// 	// 	write(1, "dest's adress was not returned\n", 31);
// 	// dest = ft_memmove(src, dest, 8);
// 	write(1, dest, 22);
// }
