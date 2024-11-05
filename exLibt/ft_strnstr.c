/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 22:51:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 22:51:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *strBig, const char *strSml, size_t n)
{
	size_t	i;
	size_t	j;

	if (*strSml == '\0')
		return ((char *)strBig);
	i = 0;
	while (i < n && strBig[i])
	{
		j = 0;
		while (i + j < n && strBig[i + j] && strBig[i + j] == strSml[j])
		{
			j++;
			if (!strSml[j])
				return ((char *)&strBig[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "lorem hola ipsum dolor hola amet";
// 	char	*ptr;

// 	ptr = ft_strnstr(str, "hola", 10);
// 	if (ptr != NULL)
// 	{
// 		printf("La subcadena 'mundo' fue encontrada en: %s\n", ptr);
// 	}
// 	else
// 	{
// 		printf("La subcadena no fue encontrada.\n");
// 	}
// 	return (0);
// }
