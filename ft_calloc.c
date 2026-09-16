/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 12:24:04 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/10 11:52:08 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (count > (size_t) - 1 / size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;
// 	str = ft_calloc(10, sizeof(char));
// 	int i = 0;
// 	while(i < 10){
// 		printf("%d->%c\n", i, str[i]);
// 		i++;
// 	}
// }
