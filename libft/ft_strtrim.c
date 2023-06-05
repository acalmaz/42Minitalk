/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:08:12 by acalmaz           #+#    #+#             */
/*   Updated: 2023/06/05 13:08:12 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	index;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_checkset(s1[start], set))
		start++;
	while (end > start && ft_checkset(s1[end - 1], set))
		end--;
	str = (char *) malloc(sizeof(char) * (end - start) + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (start < end)
	{
		str[index] = s1[start];
		index++;
		start++;
	}
	str[index] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char d[] = "ayşimerve";
	char z[] = "merve";
	printf("%s", ft_strtrim(d, z));
}*/