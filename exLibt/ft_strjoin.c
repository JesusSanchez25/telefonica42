/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strljoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:35:49 by marvin            #+#    #+#             */
/*   Updated: 2024/10/08 18:35:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strfinal;
	int		i;
	int		j;

	i = 0;
	strfinal = malloc(sizeof(char) * (ft_strlen((char *)s1)
				+ ft_strlen((char *)s2) + 1));
	if (!strfinal || !s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		strfinal[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		strfinal[i] = s2[j];
		i++;
		j++;
	}
	strfinal[i] = '\0';
	return (strfinal);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;
// 	char	*result;

// 	str1 = "Hello";
// 	str2 = NULL;
// 	result = ft_strjoin(str1, str2);
// 	if (result != NULL)
// 	{
// 		printf("Concatenated string: %s\n", result);
// 		free(result); // Don't forget to free the allocated memory
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
