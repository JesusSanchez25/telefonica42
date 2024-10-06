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
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *strBig, const char *strSml, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strncmp(strBig, strSml, (size_t)ft_strlen(strBig)) == 0)
	{
		return ((char *)&strBig[0]);
	}
	while (i < n && strBig[i])
	{
		if (!strSml[j])
			return ((char *)&strBig[i - j]);
		if (strBig[i] == strSml[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	str[] = "lorem ipsum dolor hola amet";
	char	*ptr;

	ptr = ft_strnstr(str, "hola", 10);
	if (ptr != NULL)
	{
		printf("La subcadena 'mundo' fue encontrada en: %s\n", ptr);
	}
	else
	{
		printf("La subcadena no fue encontrada.\n");
	}
	return (0);
}
