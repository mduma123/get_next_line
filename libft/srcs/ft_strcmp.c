/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mduma <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:42:09 by mduma             #+#    #+#             */
/*   Updated: 2019/06/11 10:33:46 by mduma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] != '\0')
		i++;
	if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
		return (-1);
	else if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
		return (1);
	else
		return (0);
}
