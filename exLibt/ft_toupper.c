/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:49:09 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 20:49:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/* int main() {
	char ch = 'a';
	char upper_ch = ft_toupper(ch);
	printf("Uppercase equivalent of '%c' is	'%c'\n", ch, upper_ch);
	return (0);
} */
