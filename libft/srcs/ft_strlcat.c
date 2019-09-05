/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:10:38 by mduma             #+#    #+#             */
/*   Updated: 2019/06/18 14:47:41 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	len;

	len = 0;
	while (dst[len] && len < dstsize)
		len += 1;
	a = len;
	while (src[len - a] && len + 1 < dstsize)
	{
		dst[len] = src[len - a];
		len += 1;
	}
	if (a < dstsize)
		dst[len] = '\0';
	return (a + ft_strlen(src));
}
