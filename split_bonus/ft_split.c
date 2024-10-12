/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:53:50 by alex              #+#    #+#             */
/*   Updated: 2024/10/11 17:28:57 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

int	get_word_length(const char **s, char c)
{
	int	length;

	length = 0;
	while (**s != c && **s && length++ >= 0)
		(*s)++;
	return (length);
}

char	*get_next_word(const char **s, char c)
{
	const char	*start;
	char		*word;
	int			length;
	int			i;

	i = 0;
	while (**s == c && **s)
		(*s)++;
	if (**s == '\0')
		return (NULL);
	start = *s;
	length = get_word_length(s, c);
	word = (char *)malloc(length + 1);
	if (!word)
		return (NULL);
	while (i < length)
	{
		word[i] = start[i];
		i++;
	}
	word[length] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;
	char	*word;
	int		index;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	index = 0;
	while (*s)
	{
		word = get_next_word(&s, c);
		if (word)
			result[index++] = word;
	}
	result[index] = NULL;
	return (result);
}

// int main()
// {

// 	// char *str2 = "        hello";
// 	// const char *str2 = "         ;jow hello how are you?";
// 	// char sep = ' ';
// 	char **result = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
// 	// ft_split(str2, sep);
// 	for (int i = 0; i < 5; i++)
// 		printf("%s\n", result[i]);
// }