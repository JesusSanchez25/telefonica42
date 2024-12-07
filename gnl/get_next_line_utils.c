/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:21:23 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 11:21:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || !str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

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

unsigned long	ft_strlen(const char *s)
{
	unsigned long	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*chr;

	i = 0;
	chr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&(s[i]));
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&(s[i]));
	}
	return (chr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*strfinal;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	strfinal = malloc((sizeof(char) * len) + 1);
	if (!strfinal)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		strfinal[i] = s[start + i];
		i++;
	}
	strfinal[i] = '\0';
	return (strfinal);
}
