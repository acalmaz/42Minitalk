/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:07:58 by acalmaz           #+#    #+#             */
/*   Updated: 2023/06/05 13:07:59 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	x = ft_strlen(s2);
	if (!x)
		return ((char *)s1);
	if (n != 0)
	{
		while (s1[i] && i <= n - x)
		{
			j = 0;
			while (s2[j] && s2[j] == s1[i + j])
				j++;
			if (j == x)
				return ((char *)&s1[i]);
			i++;
		}
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char f[] = "Ahmet Onal";
	char h[] = "in";

	printf("%s", ft_strnstr(f, h, 3));
}
*/
