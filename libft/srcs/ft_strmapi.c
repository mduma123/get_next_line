/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:26:35 by mduma             #+#    #+#             */
/*   Updated: 2019/06/20 13:16:03 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			s1_new[count] = (*f)(count, s1[count]);
			count++;
		}
		s1_new[count] = '\0';
		return (s1_new);
	}
	return (NULL);
}
