/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_array.h                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/03/28 14:26:57 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/24 14:43:39 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_ARRAY_H
# define FT_ARRAY_H

# include <stdlib.h>

typedef void **	t_array;

int				ar_init(t_array *array, size_t size);

size_t			ar_count(const t_array array);

int				ar_append(t_array *array, void *value);

int				ar_remove_at(t_array *array, size_t n);
int				ar_remove_first(t_array *array);
int				ar_remove_last(t_array *array);

t_array			*ar_cpy(t_array *dst, const t_array *src);

#endif
