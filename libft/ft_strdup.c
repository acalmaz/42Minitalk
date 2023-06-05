/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:06:53 by acalmaz           #+#    #+#             */
/*   Updated: 2023/06/05 13:06:54 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	x;
	size_t	i;

	i = 0;
	x = ft_strlen(s1);
	s = (char *) malloc(sizeof(char) * (x + 1));
	if (!s)
		return (0);
	{
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
	}
		s[i] = '\0';
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "merhaba";
	printf("%s", ft_strdup(s1));
}*/