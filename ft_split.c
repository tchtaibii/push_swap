/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchtaibi <tchtaibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:53:59 by tchtaibi          #+#    #+#             */
/*   Updated: 2022/03/11 23:44:57 by tchtaibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker_str(char sep, char c)
{
	if (sep == c)
		return (1);
	return (0);
}

int	ft_word_counter(char const *s, char sep)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	if (!checker_str(sep, s[0]))
		c = 1;
	while (s[i])
	{
		if (checker_str(sep, s[i])
			&& !checker_str(sep, s[i + 1]) && s[i + 1] != '\0')
			c++;
		i++;
	}
	return (c);
}

int	ft_len_counter(char const *s, char sep)
{
	int	i;
	int	c;

	c = 0;
	i = 0;
	while (checker_str(sep, s[i]) && s[i])
		i++;
	while (!checker_str(sep, s[i]) && s[i])
	{
		i++;
		c++;
	}
	return (c);
}

char	*ft_put(char *s, char sep)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_len_counter(s, sep);
	str = malloc((j + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (s[i] && j > 0)
	{
		str[i] = (char)s[i];
		i++;
		j--;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char *s, char c)
{
	int			word;
	char		**new;
	int			i;
	int			j;

	if (!s)
		return (NULL);
	word = ft_word_counter(s, c);
	new = malloc(sizeof(char *) * ((word) + 1));
	if (!new)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (checker_str(s[i], c) && s[i])
			i++;
		if (!checker_str(s[i], c) && s[i])
		{
			new[j++] = ft_put(s + i, c);
			i += ft_len_counter(s + i, c);
		}
	}
	new[j] = NULL;
	return (new);
}
