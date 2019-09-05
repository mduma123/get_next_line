/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:03:31 by mduma             #+#    #+#             */
/*   Updated: 2019/06/10 16:33:37 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	count;

	if (dst == src)
		return (dst);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (src < dst)
	{
		count = len;
		while (count-- > 0)
			tmp_dst[count] = tmp_src[count];
	}
	else
	{
		count = 0;
		while (count < len)
		{
			tmp_dst[count] = tmp_src[count];
			count++;
		}
	}
	return (dst);
}
