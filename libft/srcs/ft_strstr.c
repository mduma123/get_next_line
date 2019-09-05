/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:53:24 by mduma             #+#    #+#             */
/*   Updated: 2019/06/10 13:25:49 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!s2[0])
		return ((char *)&s1[i]);
	while (s1[i])
	{
		while ((s1[i + j] == s2[j]) && s2[j])
			j++;
		if (!s2[j])
			return ((char *)&s1[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
