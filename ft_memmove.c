/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:45:02 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/19 11:31:04 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (n == 0)
		return (s1);
	if (s2 < s1)
	{
		while (n > 0)
		{
			n--;
			((unsigned char *)s1)[n] = ((unsigned char *)s2)[n];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)s1)[len] = ((unsigned char *)s2)[len];
			len++;
		}
	}
	return (s1);
}
