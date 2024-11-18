/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarue <llarue@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:29:09 by llarue            #+#    #+#             */
/*   Updated: 2024/09/25 17:15:17 by llarue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <cstdlib>

# define COLOR_RESET	"\e[0m"
# define ORANGE			"\e[38;5;215m"
# define PURPLE			"\e[38;5;105m"
# define BLUE			"\e[38;5;27m"
# define RED			"\e[38;5;160m"
# define GREEN			"\e[38;5;48m"
# define YELLOW			"\e[38;5;226m"
# define CYAN			"\e[38;5;51m"
# define MAGENTA		"\e[38;5;127m"

typedef	std::string	string;
typedef	std::map< string, string >	map;

class BitcoinExchange {
	private:
		map		_data;
		bool	_validDataFile;
		bool	_validInputFile;

		string	strTrim( string const & s );
		void	validInputFile( const string & inputFile );

	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const & src );
		~BitcoinExchange( void );

		BitcoinExchange	&operator=( BitcoinExchange const & src );

		void	execute( const string & inputFilename );
		bool	getValidDataStatus( void );
};

bool	validDataDate( string date );
bool	validExchangeRate( string exchangeRate );
bool	validFileDate( string date );
bool	validFileValue( string inputValue );

#endif