/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-bouk <yel-bouk@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:07:04 by yel-bouk          #+#    #+#             */
/*   Updated: 2024/11/10 21:10:18 by yel-bouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Sets the first `num` bytes of the memory 
area pointed to by `ptr` to zero (null bytes).*/
void	ft_bzero(void *ptr, size_t num)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)ptr;
	while (i < num)
	{
		str[i] = 0;
		i++;
	}
}
