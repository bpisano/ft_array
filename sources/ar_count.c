/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_count.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 14:19:51 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/28 14:40:59 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

int		ar_count(t_array array)
{
	int		i;

	i = -1;
	while (array[++i])
		;
	return (i);
}
