/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acalmaz <acalmaz@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:06:26 by acalmaz           #+#    #+#             */
/*   Updated: 2023/06/05 13:06:26 by acalmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int main()
{
 	int fd = open("/Users/ahmet/Desktop/test.txt",O_CREAT |  O_WRONLY);
 	ft_putendl_fd("Merhaba 42 Kocaeli",fd);
}*/
