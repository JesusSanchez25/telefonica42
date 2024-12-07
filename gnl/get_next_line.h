/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:23:00 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 11:23:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif

char			*get_next_line(int fd);
char			*ft_strdup(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
unsigned long	ft_strlen(const char *s);
char			*ft_strrchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
