/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:55:30 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/10 10:59:59 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	i = 0;
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char *s1 = "Hello, world";
// 	char s2[5];
// 	ft_memcpy(s2, s1, 5);
// 	printf("%s\n", s2);

// }
