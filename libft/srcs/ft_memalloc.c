/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:39:40 by mduma             #+#    #+#             */
/*   Updated: 2019/05/28 14:44:26 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memalloc(size_t size)
{
	void *loc;

	if ((loc = (void*)malloc(size)) && size)
	{
		ft_bzero(loc, size);
		return (loc);
	}
	return (NULL);
}
