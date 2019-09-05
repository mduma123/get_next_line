/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:57:57 by mduma             #+#    #+#             */
/*   Updated: 2019/06/14 08:28:40 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s1;
	char	*s1_new;
	size_t	len;
	size_t	count;

	s1 = (char*)s;
	if (!s1)
		return (NULL);
	while (*s1 == ' ' || *s1 == '\t' || *s1 == '\n')
		s1++;
	len = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (s1_new = ft_strnew(0));
	while (s1[len] == ' ' || s1[len] == '\t' || s1[len] == '\n')
		len--;
	if (!(s1_new = ft_strnew(len + 1)))
		return (NULL);
	count = 0;
	while (count <= len)
	{
		s1_new[count] = s1[count];
		count++;
	}
	s1_new[count] = 0;
	return (s1_new);
}
