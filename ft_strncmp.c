/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 14:33:00 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/08 12:52:52 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char )s1[i] != (unsigned char )s2[i])
			return ((unsigned char )s1[i] - (unsigned char )s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1 = "\x9b";
// 	char	*s2 = "A";
// 	int		n1 = strncmp(s1, s2, 1);
// 	int		n2 = ft_strncmp(s1, s2, 1);
// 	printf("my strncmp: %d\nOriginal strncmp: %d\n", n2, n1);
// }
