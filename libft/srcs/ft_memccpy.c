/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:52:00 by mduma             #+#    #+#             */
/*   Updated: 2019/06/10 16:17:18 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	count;
	char	*str_dst;
	char	*str_src;

	if (!dst && !src)
		return (NULL);
	count = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (count < n)
	{
		str_dst[count] = str_src[count];
		if ((char)c == str_dst[count])
			return ((void*)&str_dst[count + 1]);
		count++;
	}
	return (NULL);
}
