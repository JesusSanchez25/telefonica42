/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:19:04 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 21:19:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return (0);
}

/* int main() {
		char str1[] = "abc";
		char str2[] = "abc";

		int result = ft_strncmp(str1, str2, 5);

		if (result == 0) {
				printf("The first 5 characters of str1 and str2 are equal.\n");
		} else if (result > 0) {
				printf("str1 is greater than str2.\n");
		} else {
				printf("str1 is less than str2.\n");
		}

		return (0);
} */
