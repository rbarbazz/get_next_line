/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarbazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:33:35 by rbarbazz          #+#    #+#             */
/*   Updated: 2017/11/10 11:40:10 by rbarbazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *t;

	t = s;
	if (n == 0)
		return ;
	while (n > 0)
	{
		*t = 0;
		t++;
		n--;
	}
}
