/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:32:21 by mduma             #+#    #+#             */
/*   Updated: 2019/06/11 10:35:59 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n--)
	{
		if (*s1 != *s2)
		{
			if (((unsigned char)*s1 - (unsigned char)*s2) < 0)
				return (-1);
			else if (((unsigned char)*s1 - (unsigned char)*s2) > 0)
				return (1);
			else
				return (0);
		}
		s1++;
		s2++;
	}
	return (0);
}
