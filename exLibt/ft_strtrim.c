/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:55:41 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 18:55:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	size;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	size = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[size]) && size != 0)
		size--;
	return (ft_substr((char *)s1, 0, size + 1));
}

// int	main(void)
// {
// 	char	*str;
// 	char	*trimmed;

// 	// COMPROBANDO STRTRIM
// 	str = "  Hello, world!  ";
// 	printf("Trimmed string: %s\n", str);
// 	trimmed = ft_strtrim(str, " \t\n\r\f\v");
// 	if (trimmed != NULL)
// 	{
// 		printf("Trimmed string: %s\n", trimmed);
// 		free(trimmed);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
