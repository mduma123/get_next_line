/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:21:00 by mduma             #+#    #+#             */
/*   Updated: 2019/06/19 09:25:44 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char			*s1;
	unsigned int	count;

	s1 = (char *)s;
	if (s1 && f)
	{
		count = 0;
		while (s1[count])
		{
			(*f)(count, &s1[count]);
			count++;
		}
	}
}
