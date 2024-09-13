/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:56:06 by llarue            #+#    #+#             */
/*   Updated: 2024/09/13 16:44:56 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ) {
	std::cout << ORANGE << "ScalarConverter default constructor" << COLOR_RESET << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src ) {
	std::cout << PURPLE << "ScalarConverter copy constructo" << COLOR_RESET << std::endl;
	*this = src;
}

ScalarConverter::~ScalarConverter( void ) {
	std::cout << ORANGE << "ScalarConverter default destructor" << COLOR_RESET << std::endl;
}

ScalarConverter	&ScalarConverter::operator=( ScalarConverter const & src ) {
	std::cout << BLUE << "ScalarConverter copy assignment operator" << COLOR_RESET << std::endl;
	(void)src;
	return (*this);
}

void ScalarConverter::convert( std::string const & av ) {
	std::string	limits[6] = { "-inff", "+inff", "nanf", "-inf", "+inf", "nan" };
	std::string	toChar = "";
	int			toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;

	if (av.size() == 1 && std::isprint(av[0]) && !std::isdigit(av[0])) {
		toChar = av[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << std::endl;
		return ;
	}
	
	toInt = std::atoi(av.c_str());

	if (av[av.length() - 1] == 'f') {
		toFloat = std::atof(av.c_str());
		toDouble = static_cast<double>(toFloat);
	}
	else {
		toDouble = std::atof(av.c_str());
		toFloat = static_cast<float>(toDouble);
	}
	
	for (int i = 0; i < 6; i++) {
		if (!av.compare(limits[i])) {
			toChar = "impossible";
			break ;
		}
	}
	
	if (toChar == "" && (toInt >= 32 && toInt <= 126)) {
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else if (toChar == "")
		toChar = "Non displayable";

	std::cout << "char: " << toChar << std::endl;
	if (toChar == "Non displayable" || toChar == "impossible")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << toInt << std::endl;
	
	if ((toChar == "Non displayable" || toChar == "impossible") && toFloat == 0) {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else {
		if (toChar != "Non displayable" && toFloat - static_cast<int>(toFloat) == 0) {
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		}
		else {
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}