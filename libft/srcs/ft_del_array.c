/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlereffa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:26:29 by jlereffa          #+#    #+#             */
/*   Updated: 2016/11/23 21:26:31 by jlereffa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del_array(char ***array)
{
	int		i;

	i = 0;
	while (array[0][i])
	{
		ft_strdel(&array[0][i]);
		i++;
	}
	free(array[0]);
	array[0] = NULL;
}