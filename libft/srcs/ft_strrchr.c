/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:20:54 by mduma             #+#    #+#             */
/*   Updated: 2019/06/10 16:18:22 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

char		*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	else
		while (len--)
			if (*(s + len) == c)
				return ((char *)(s + len));
	return (NULL);
}
