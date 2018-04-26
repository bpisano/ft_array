/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ar_joined.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/26 15:31:44 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/26 15:37:31 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_array.h"

t_array	ar_joined(t_array a1, t_array a2)
{
	int		i;
	t_array	join;

	i = -1;
	if (!ar_init(&join, 0))
		return (NULL);
	while (a1[++i])
		if (!ar_append(&join, a1[i]))
		{
			free(join);
			return (NULL);
		}
	i = -1;
	while (a2[++i])
		if (!ar_append(&join, a2[i]))
		{
			free(join);
			return (NULL);
		}
	return (join);
}
