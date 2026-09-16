/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 15:41:00 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/09 13:03:02 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nbr);
static char	*pre_convert(int len);

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*res;
	long	nbr;

	nbr = n;
	len = int_len(nbr);
	res = pre_convert(len);
	if (!res)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		res[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}

static char	*pre_convert(int len)
{
	char	*tmp;

	tmp = malloc(len + 1);
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	char *str = ft_itoa(-8250);
// 	int i = 0;
// 	while (str[i]){
// 		printf("%c", str[i]);
// 		i++;
// 	}
// }
