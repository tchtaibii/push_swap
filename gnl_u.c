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

char	*ft_substr(char *str, int start, int len)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	if (start >= ft_strlen(str))
		len = 0;
	while (i < len && str[i])
		i++;
	new = malloc(i + 1);
	if (!new)
		return (0);
	while (j < i)
		new[j++] = str[start++];
	new[j] = '\0';
	return (new);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = 0;
	}
	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (0);
	while (s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	free(s1);
	return (new);
}

int	check_new_line(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
