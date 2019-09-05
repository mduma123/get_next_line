/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:43:14 by mduma             #+#    #+#             */
/*   Updated: 2019/06/10 12:08:48 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	char	*str_dst;
	char	*str_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	count = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	while (count < n)
	{
		str_dst[count] = str_src[count];
		count++;
	}
	return (dst);
}
