/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_room.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlereffa <jlereffa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:33:54 by jlereffa          #+#    #+#             */
/*   Updated: 2017/08/20 17:09:19 by jlereffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int	check_room(char *s)
{
	DEB
	putf(s, "\n");
	if (!s || !*s || *s == '#' || *s == 'L' || *s < 32 || *s > 126 || *s == ' ')
		return (0);
	DEB
	while (*s && *s >= 32 && *s <= 126 && *s != ' ')
		s++;
	DEB
	if (!*s || *s != ' ')
	{
		DEB
		return (0);
	}
	DEB
	s++;
	if (!*s || !(*s >= '0' && *s <= '9'))
	{
		DEB
		return (0);
	}
	while (*s && *s >= '0' && *s <= '9')
		s++;
	if (!*s || *s != ' ')
	{
		DEB
		return (0);
	}
	s++;
	if (!*s || !(*s >= '0' && *s <= '9'))
	{
		DEB
		return (0);
	}
	while (*s && *s >= '0' && *s <= '9')
		s++;
	if (*s)
	{
		DEB
		return (0);
	}
	DEB
	return (1);
}
