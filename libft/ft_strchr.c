/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:06:48 by acalmaz           #+#    #+#             */
/*   Updated: 2023/06/05 13:06:48 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	z;

	z = ft_strlen(s);
	while (z >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		z--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "merhabaikocaeli";
	printf("%s", ft_strchr(str, 'i'));
}
*/