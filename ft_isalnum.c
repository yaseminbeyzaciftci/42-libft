/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaciftci <yaciftci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:11:45 by yaciftci          #+#    #+#             */
/*   Updated: 2024/10/24 10:50:21 by yaciftci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}