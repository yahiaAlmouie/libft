/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalmoui <yaalmoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 13:07:20 by yaalmoui          #+#    #+#             */
/*   Updated: 2026/09/10 17:05:41 by yaalmoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *s, char delimeter)
{
	size_t	words;
	int		inside_word;
	int		i;

	words = 0;
	i = 0;
	inside_word = 1;
	while (s[i])
	{
		inside_word = 0;
		while (s[i] == delimeter && s[i])
			i++;
		while (s[i] != delimeter && s[i])
		{
			if (!inside_word)
			{
				words++;
				inside_word = 1;
			}
			i++;
		}
	}
	return (words);
}

int	safe_malloc(char **word_arr, int position, size_t size)
{
	int	i;

	i = 0;
	word_arr[position] = malloc(size);
	if (word_arr == NULL)
	{
		while (i < position)
		{
			free(word_arr[i]);
			i++;
		}
		free(word_arr);
		return (1);
	}
	return (0);
}

int	fill(char **word_arr, char const *s, char c)
{
	size_t	len;
	int		position;

	position = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (safe_malloc(word_arr, position, len + 1))
				return (1);
			ft_strlcpy(word_arr[position], s - len, len + 1);
		}
		position++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**word_arr;

	words = 0;
	words = count_words(s, c);
	word_arr = malloc((words + 1) * sizeof(char *));
	if (!word_arr)
		return (NULL);
	word_arr[words] = NULL;
	if (fill(word_arr, s, c))
		return (NULL);
	return (word_arr);
}

// int	main(void)
// {
// 	char *s = "Hello world 123 !!! )))";
// 	char **ss = ft_split(s, ' ');
// 	while (*ss)
// 	{
// 		printf("%s\n", *ss++);
// 	}
// }
