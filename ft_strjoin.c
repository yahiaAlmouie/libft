/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:23:40 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/08/31 17:12:45 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;

	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

// int main(void)
// {
// 	char *s1 = "Hello ";
// 	char *s2 = "world!";
// 	char *res = ft_strjoin(s1, s2);
// 	printf("s1 = %s = %li - s2 = %s = %li - res = %s = %li\n",
// s1, ft_strlen(s1), s2, ft_strlen(s2), res, ft_strlen(res));
// }
