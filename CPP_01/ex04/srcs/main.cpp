/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:49:26 by llarue            #+#    #+#             */
/*   Updated: 2024/02/02 14:56:52 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replace_str(std::string filename, std::string to_find, std::string to_replace)
{
	std::ifstream	input_file;
	std::ofstream	output_file;
	std::string		line;
	std::string		temp;
	size_t			match_pos;
	size_t			pos;

	input_file.open(filename.c_str(), std::ifstream::in);
	if (!input_file)
	{
		std::cout << "Input file could not be opened" << std::endl;
		return ;
	}
	output_file.open(std::string(filename + ".replace").c_str(), std::ofstream::out);
	if (!output_file)
	{
		std::cout << "Output file could not be opened" << std::endl;
		return ;
	}
	while (std::getline(input_file, line))
	{
		pos = 0;
		while ((match_pos = line.find(to_find, pos)) != std::string::npos)
		{
			temp = line.substr(match_pos + to_find.size());
			line.erase(match_pos);
			line += to_replace + temp;
			pos = match_pos + to_replace.size();
		}
		output_file << line;
		if (!input_file.eof())
			output_file << std::endl;
	}
	input_file.close();
	output_file.close();
}

int	main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Usage: ./sed <filename> <to_find> <to_replace>" << std::endl;
	else
	{
		std::cout << "av[2] = " << av[2] << std::endl;
		if (!(av[2][0]))
		{
			std::cout << "Error: <to_find> cannot be empty" << std::endl;
			return (1);
		}
		replace_str(av[1], av[2], av[3]);
	}
	return (0);
}