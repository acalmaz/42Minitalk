/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:06:41 by acalmaz           #+#    #+#             */
/*   Updated: 2023/06/05 13:06:42 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	wordc(const char *s, char delimiter)
{
	unsigned int	w;

	w = 0;
	while (*s)
	{
		if (*s == delimiter)
			s++;
		else
		{
			while (*s != delimiter && *s)
				s++;
				w++;
		}
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	x;
	unsigned int	y;
	char			**arr;

	if (!s)
		return (NULL);
		arr = (char **) ft_calloc(wordc(s, c) + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	y = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			x = 0;
			while (*s != c && *s && ++x)
				s++;
			arr[++y -1] = (char *) ft_calloc(x + 1, sizeof(char));
			ft_strlcpy(arr[y - 1], s - x, x + 1);
		}
	}
	return (arr);
}
/*
#include <stdio.h>

int main()
{
	char **c = ft_split("kocaeli.42.esin", '.');
	int a = 0;
	while(c[a] != 0)
	{
		printf("%s\n", c[a]);
		a++;
	}
}*/
