/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:59:42 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 20:59:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
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
	return (NULL);
}

/* int main() {
	char str[] = "Hello, world!";
	char *ptr;

	ptr = ft_strchr(str, 'o');
	if (ptr != NULL) {
		printf("The first occurrence of 'o' is at index %ld\n", ptr - str);
	} else {
		printf("'o' not found in the string.\n");
	}

	return 0;
} */
