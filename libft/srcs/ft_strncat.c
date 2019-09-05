/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:07:24 by mduma             #+#    #+#             */
/*   Updated: 2019/06/10 12:46:34 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		a;
	size_t	b;
	char	*str1;
	char	*str2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	str1 = (char*)s1;
	str2 = (char*)s2;
	a = 0;
	b = 0;
	while (str1[a] != '\0')
		a++;
	while (str2[b] != '\0' && b < n)
	{
		str1[a + b] = str2[b];
		b++;
	}
	str1[a + b] = '\0';
	return (str1);
}
