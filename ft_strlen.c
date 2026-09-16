/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:07:04 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/08/18 16:57:51 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <string.h>
// #include <stdio.h>

// // int	main(void)
// // {
// // 	int n = strlen("Hello");
// // 	int s = ft_strlen("Hello");
// // 	printf("%d - %d\n", n, s);
// // }
