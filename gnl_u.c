/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   gnl_u.c											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 23:30:20 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/01 23:31:14 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "bonus.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	check_line(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;
	int		a;
	int		b;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	new = malloc ((a + b + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < a)
		new[i++] = s1[j++];
	j = 0;
	while (j < b)
		new[i++] = s2[j++];
	new[i] = '\0';
	free (s1);
	return (new);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*x;
	int		i;
	int		j;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		len = 0;
	i = 0;
	j = 0;
	while (i < len && s[i])
		i++;
	x = malloc((i + 1) * sizeof(char));
	if (!x)
		return (NULL);
	while (j < i)
		x[j++] = s[start++];
	x[i] = '\0';
	return (x);
}
