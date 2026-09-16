/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:18:12 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/08/18 15:38:42 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n = ft_isalpha('z');
// 	int d = ft_isalpha(' ');
// 	printf("n->%d\nd->%d", n, d);
// }
