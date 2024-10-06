/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:10:15 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 21:10:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

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
			chr = (char *)&(s[i]);
		}
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&(s[i]));
	}
	return (chr);
}

// int main() {
// 		char str[] = "Hello, world!";
// 		char *ptr;

// 		ptr = ft_strrchr(str, 'Z');
// 		if (ptr != NULL) {
// 				printf("The last occurrence of 'o'" + "
// is at index %ld\n", ptr - str);
// 		} else {
// 				printf("'o' not found in the string.\n");
// 		}

// 		return 0;
// }
