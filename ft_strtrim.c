/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 17:05:25 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/08 12:27:24 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && c != str[i])
		i++;
	return (c == str[i]);
}

char	*ft_strtrim(const char *s, const char *set)
{
	size_t	first;
	size_t	last;
	char	*strtim;

	if (!s || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s);
	while (in(set, s[first]))
		first++;
	last = ft_strlen(s);
	while (in(set, s[last - 1]))
		last--;
	strtim = ft_substr(s, first, last - first);
	return (strtim);
}

// int	main(void)
// {
// 	char s1[] = "olololhello worldlolol";
// 	char set[] = "";
// 	printf("%s\n", ft_strtrim(s1, set));
// }
