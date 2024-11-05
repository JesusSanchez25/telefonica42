/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:04:59 by marvin            #+#    #+#             */
/*   Updated: 2024/09/18 21:04:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*ptr++ = 0;
	}
}

// int main() {
//     char buffer[10] = "test";
//     printf("Buffer antes de bzero: %s\n", buffer);

//     ft_bzero(buffer, 10);
//     buffer[0] = '\0';
//     printf("Buffer despues de bzero: %s\n", buffer);
//     return 0;
// }
