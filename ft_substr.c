/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:46:00 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/10 13:44:58 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	size_t	clen;
	char	*str;

	i = 0;
	slen = ft_strlen(s);
	if (start >= slen)
		clen = 0;
	else if (len > slen - start)
		clen = slen - start;
	else
		clen = len;
	str = malloc(clen + 1);
	if (!str)
		return (NULL);
	while (i < clen)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
