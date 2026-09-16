/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:18:43 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/08/19 11:34:41 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "hello";
// 	printf("%s\n", s);
// 	ft_memset(s, 'z', 3);
// 	printf("%s\n", s);

// }
