/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:23:29 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:28:32 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*s1;
	char			*s1_new;
	unsigned int	count;

	s1 = (char *)s;
	if (s1 && f)
	{
		count = 0;
		if (!(s1_new = ft_memalloc(ft_strlen(s1) + 1)))
			return (NULL);
		while (s1[count])
		{
			s1_new[count] = (*f)(s1[count]);
			count++;
		}
		s1_new[count] = '\0';
		return (s1_new);
	}
	return (NULL);
}
