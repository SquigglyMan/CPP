/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:56:06 by llarue            #+#    #+#             */
/*   Updated: 2024/09/14 10:09:23 by llarue           ###   ########.fr       */
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

void ScalarConverter::convert( std::string const & literal ) {
	std::string	pseudoLiteral[12] = { "inff", "-inff", "+inff", "inf", "-inf", "+inf", "nan", "nanf", "-nan", "-nanf", "+nan", "+nanf" };

	std::string	toChar = "";
	int			i = 0;
	float		toFloat = 0;
	double		toDouble = 0;

	bool		isScalar = false;

	try {
		if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) {
			std::cout << "char: " << static_cast<char>( literal[0] ) << std::endl;
			std::cout << "int: " << static_cast<int>( literal[0] ) << std::endl;
			std::cout << "float: " << static_cast<float>( literal[0] ) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>( literal[0] ) << ".0" << std::endl;
			return ;
		}
	}
	catch ( std::exception & e ) {
		std::cout << "what(): " << e.what() << std::endl;
	}

	isScalar = isOnlyDigits( literal );
		
	for ( i = 0; i < 12; i++ )  {
		if ( literal == pseudoLiteral[i] ) {
			isScalar = true;
			break ;
		}
	}

	if ( !isScalar ) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}

	toDouble = std::strtod( literal.c_str(), NULL );

	try {
		if ( toDouble >= 32 && toDouble <= 126 && toChar == "" ) {
			toChar = "'";
			toChar += static_cast< char >( toDouble );
			toChar += "'";
		}
		else if ( i < 12 || toDouble < 0 || toDouble > 127 )
			toChar = "impossible";
		else
			toChar = "Non displayable";
	}
	catch ( std::exception & e ) {
		std::cout << "what(): " << e.what() << std::endl;
	}

	try {
		toFloat = static_cast< float > ( toDouble );
	}
	catch ( std::exception & e ) {
		std::cout << "what(): " << e.what() << std::endl;
	}
	
	try {
		if ( toDouble > std::numeric_limits< int >::max() || toDouble < std::numeric_limits< int >::min() || i < 12 ) {
			std::cout << "char: " << toChar << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else {
			std::cout << "char: " << toChar << std::endl;
			std::cout << "int: " << static_cast< int >( toDouble ) << std::endl;
		}
	}
	catch ( std::exception & e ) {
		std::cout << "what(): " << e.what() << std::endl;
	}

	try {
		if ( toFloat == std::numeric_limits< float >::infinity() )
			std::cout << "float: " << toFloat << "f" << std::endl;
		else if ( toFloat == -std::numeric_limits< float >::infinity() )
			std::cout << "float: " << toFloat << "f" << std::endl;
		else if ( toFloat - static_cast<int>(toFloat) == 0 )
			std::cout << "float: " << toFloat << ".0f" << std::endl;
		else
			std::cout << "float: " << toFloat << "f" << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "what(): " << e.what() << std::endl;
	}

	try {
		if ( toDouble == std::numeric_limits< double >::infinity() )
			std::cout << "double: " << toDouble << std::endl;
		else if ( toDouble == -std::numeric_limits< double >::infinity() )
			std::cout << "double: " << toDouble << std::endl;
		else if ( toFloat - static_cast<int>(toFloat) == 0)
			std::cout << "double: " << toDouble << ".0" << std::endl;
		else
			std::cout << "double: " << toDouble << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << "what(): " << e.what() << std::endl;
	}
}

bool	isOnlyDigits( std::string literal )
{
	bool	error = false;
	size_t	i = 0;

	if (literal[0] == '+' || literal[0] == '-' )
		i++;
	while ( i < literal.length() - 1 )
	{
		if ( !isdigit(literal[i]) && literal[i] != '.' )
			return ( false );
		if ( literal[i] == '.' && !error )
			error = true;
		else if ( literal[i] == '.' && error )
			return (false);
		i++;
	}
	if ( !isdigit( literal[i] ) && literal[i] != 'f' )
		return ( false );
	return ( true );
}