/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   gnl.c											  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/01 23:28:08 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/01 23:30:10 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "bonus.h"

char	*ft_a(char *str)
{
	int		i;
	char	*tmp;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			tmp = ft_substr(str, i + 1, ft_strlen(str));
			free(str);
			return (tmp);
		}
		i++;
	}
	return (0);
}

char	*ft_b(char *str)
{
	int		i;

	i = 0;
	if (!str[0])
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	return (ft_substr(str, 0, i +1));
}

char	*get_line(int fd, char *str)
{
	char	*tmp;
	int		t;

	t = 1;
	tmp = malloc(1 + 1);
	if (!tmp)
		return (0);
	while (t && !check_new_line(str))
	{
		t = read(fd, tmp, 1);
		if (t == -1)
		{
			free(tmp);
			return (0);
		}
		tmp[t] = '\0';
		str = ft_strjoin(str, tmp);
	}
	free(tmp);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*sta;
	char		*l;

	if (fd < 0 || 1 <= 0)
		return (0);
	sta = get_line(fd, sta);
	if (!sta)
		return (0);
	l = ft_b(sta);
	sta = ft_a(sta);
	return (l);
}
