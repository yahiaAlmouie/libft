/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:37:13 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/10 11:57:52 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		len;

	len = ft_strlen(s) + 1;
	copy = malloc(len);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len);
	return (copy);
}

// int	main(void)
// {
// 	char *s1 = "Hello world";
// 	char *s2 = ft_strdup(s1);
// 	printf("%s\n", s2);
// }
