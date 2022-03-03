/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strcmp.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: tchtaibi <tchtaibi@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/03/02 01:03:28 by tchtaibi		  #+#	#+#			 */
/*   Updated: 2022/03/02 01:16:01 by tchtaibi		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "bonus.h"

int	ft_strncmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
// int main()
// {
//	 printf("%d", ft_strncmp("pa", "pa"));
// }