/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouliol <nbouliol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:34:46 by nbouliol          #+#    #+#             */
/*   Updated: 2014/11/18 15:56:12 by nbouliol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t		i;

	if (s)
	{
		i = ft_strlen(s);
		while (i != 0)
		{
			s[i] = '\0';
			i--;
		}
		s[i] = 0;
	}
}
