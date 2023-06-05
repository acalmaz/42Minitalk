/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:08:07 by acalmaz           #+#    #+#             */
/*   Updated: 2023/06/05 13:08:07 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	p;

	p = ft_strlen(s);
	while (p >= 0)
	{
		if (s[p] == (char)c)
			return ((char *)&s[p]);
		p--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main()
{
	char d[] = "esin";
	printf("%s", ft_strrchr(d, 'i'));
}
*/