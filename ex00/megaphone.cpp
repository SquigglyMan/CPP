/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 07:58:00 by llarue            #+#    #+#             */
/*   Updated: 2024/01/04 10:00:21 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int ac, char** av)
{
	if (ac == 1)
	{
		std::string default_string = "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		std::cout << default_string;
	}
	else if (ac > 1)
	{
		av++;
		while (*av)
		{
			std::transform(*av.begin(), *av.end(), *av.begin(), ::toupper);
			av++;
		}
	}
	return (0);
}
