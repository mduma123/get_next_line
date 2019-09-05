/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:10:24 by mduma             #+#    #+#             */
/*   Updated: 2019/06/03 15:11:28 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*st1;
	const unsigned char		*st2;

	if (s1 == s2 || n == 0)
		return (0);
	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
		if (n)
		{
			st1++;
			st2++;
		}
	}
	return (0);
}
